#include <stdio.h>

int main()
{
    char ch;
    printf("enter the chracter:\t");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("its a lower case character!\n");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("its an upper case character!1\n");
    }
    else
    {
        printf("not a valid input!!\n");
    }

    return 0;
}
