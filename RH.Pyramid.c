#include <stdio.h>

int main()
{

    int row = 5;



    // kalsjdfkljsadlfjljsadlf

    for (int i = 1; i <= row; i++)
    {
        for (int k = 1; k <= row - i; k++)
        {
            printf("  ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

}