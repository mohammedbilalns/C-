#include <stdio.h>
#include <stdlib.h>

int main()
{

    int lineNumber, i, j;
    printf("Enter the number of lines: ");
    scanf("%d", &lineNumber);

    for (i = 1; i <= lineNumber; i++)
    {
        for (j = 1; j <= 2 * lineNumber - i; j++)
        {
            (j <= i - 1) ? printf("  ") : printf("* ");
        }

        printf("\n");
    }

    for (i = lineNumber; i >= 1; i--)
    {
        for (j = 1; j <= lineNumber + i - 1; j++)
        {
            (j <= lineNumber - i) ? printf("  ") : printf("* ");
        }
        printf("\n");
    }
}
