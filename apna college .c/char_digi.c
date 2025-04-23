// agar double ya triple digit number ho to uska kaise kare aur agar symbols ka alag output karna ho to kaise kare

#include <stdio.h>

int main()
{
    char ch;
    printf("enter var:\t");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("it is a character");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("it is a character");
    }
    else
    {
        printf("its a digit");
    }
    // if (ch != 'a' || ch != 1)
    // {
    //     printf("neither");
    // }

    return 0;
}