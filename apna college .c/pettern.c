// void printPattern(int n)
// {
//     int num = 1;
//     for (int i =
//              1;
//          i <= n; i++)
//     {
//         int val = num;
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", val);
//             val -= (n - j);
//         }
//         num += (n - i);
//         printf("\n");
//     }
// }
// int main()
// {
//     int n = 6; // Number of rows
//     printPattern(n);
//     return 0;
// }
#include <stdio.h>

void printPattern(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        int val = num;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", val);
            val -= (n - j);
        }
        num += (n - i);
        printf("\n");
    }
}

int main()
{
    int n = 3; // Number of rows
    printPattern(n);
    return 0;
}
