import tkinter as tk
from tkinter import ttk, scrolledtext
import speech_recognition as sr
import pyttsx3
import webbrowser
import os
import subprocess
import threading

class AIAssistant:
    def __init__(self, root):
        self.root = root
        self.root.title("AI Assistant")
        self.root.geometry("600x400")
        self.root.resizable(False, False)
        
        # Initialize speech engine
        self.engine = pyttsx3.init()
        self.recognizer = sr.Recognizer()
        
        # Create GUI elements
        self.create_widgets()
        
    def create_widgets(self):
        # Main frame
        main_frame = ttk.Frame(self.root, padding="10")
        main_frame.grid(row=0, column=0, sticky=(tk.W, tk.E, tk.N, tk.S))
        
        # Title label
        title_label = ttk.Label(main_frame, text="AI Assistant", font=("Arial", 16, "bold"))
        title_label.grid(row=0, column=0, columnspan=2, pady=10)
        
        # Voice input button
        self.voice_button = ttk.Button(main_frame, text="🎤 Start Voice Input", command=self.start_voice_input)
        self.voice_button.grid(row=1, column=0, columnspan=2, pady=10)
        
        # Conversation display
        self.conversation = scrolledtext.ScrolledText(main_frame, width=60, height=15, wrap=tk.WORD)
        self.conversation.grid(row=2, column=0, columnspan=2, pady=10)
        self.conversation.config(state=tk.DISABLED)
        
        # Status label
        self.status_label = ttk.Label(main_frame, text="Ready", font=("Arial", 10))
        self.status_label.grid(row=3, column=0, columnspan=2, pady=5)
        
    def speak(self, text):
        self.engine.say(text)
        self.engine.runAndWait()
        
    def update_conversation(self, text, is_user=False):
        self.conversation.config(state=tk.NORMAL)
        if is_user:
            self.conversation.insert(tk.END, f"You: {text}\n")
        else:
            self.conversation.insert(tk.END, f"Assistant: {text}\n")
        self.conversation.see(tk.END)
        self.conversation.config(state=tk.DISABLED)
        
    def process_command(self, command):
        command = command.lower()
        
        if "open google" in command:
            webbrowser.open("https://www.google.com")
            self.speak("Opening Google")
            self.update_conversation("Opening Google")
            
        elif "open youtube" in command:
            webbrowser.open("https://www.youtube.com")
            self.speak("Opening YouTube")
            self.update_conversation("Opening YouTube")
            
        elif "open notepad" in command:
            subprocess.Popen("notepad.exe")
            self.speak("Opening Notepad")
            self.update_conversation("Opening Notepad")
            
        elif "open calculator" in command:
            subprocess.Popen("calc.exe")
            self.speak("Opening Calculator")
            self.update_conversation("Opening Calculator")
            
        elif "hello" in command or "hi" in command:
            self.speak("Hello! How can I help you?")
            self.update_conversation("Hello! How can I help you?")
            
        else:
            self.speak("I'm not sure how to help with that. Try asking me to open Google, YouTube, Notepad, or Calculator.")
            self.update_conversation("I'm not sure how to help with that. Try asking me to open Google, YouTube, Notepad, or Calculator.")
            
    def start_voice_input(self):
        def listen():
            self.voice_button.config(state=tk.DISABLED)
            self.status_label.config(text="Listening...")
            
            with sr.Microphone() as source:
                self.recognizer.adjust_for_ambient_noise(source)
                try:
                    audio = self.recognizer.listen(source, timeout=5)
                    command = self.recognizer.recognize_google(audio)
                    self.update_conversation(command, is_user=True)
                    self.process_command(command)
                except sr.WaitTimeoutError:
                    self.speak("No voice input detected")
                    self.update_conversation("No voice input detected")
                except sr.UnknownValueError:
                    self.speak("Sorry, I couldn't understand that")
                    self.update_conversation("Sorry, I couldn't understand that")
                except Exception as e:
                    self.speak("An error occurred")
                    self.update_conversation(f"Error: {str(e)}")
                    
            self.voice_button.config(state=tk.NORMAL)
            self.status_label.config(text="Ready")
            
        threading.Thread(target=listen).start()

if __name__ == "__main__":
    root = tk.Tk()
    app = AIAssistant(root)
    root.mainloop() 