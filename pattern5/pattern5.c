#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lineNumber, i, j;
    printf("Enter the number of lines \n");
    scanf("%d", &lineNumber);
    system("clear");
    for (i = 1; i <= lineNumber; i++)
    {
        for (j = 1; j < lineNumber + i; j++)
        {
            (j <= lineNumber - i) ? printf("  ") : printf("* ");
        }

        printf("\n");
    }
}