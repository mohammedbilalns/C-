#include <stdio.h>

int main()
{
    int lineCount, i, j;
    printf("Enter the number of lines: ");
    scanf("%d", &lineCount);

    for (i = 1; i <= lineCount; i++)
    {
        int k = 1;
        for (j = 0; j <= lineCount + i - 1; j++)
        {
            if (j <= lineCount - i)
            {
                printf("  ");
            }
            else if (j < lineCount)
            {
                printf("%d ", k);
                k++;
            }
            else
            {
                printf("%d ", k);
                k--;
            }
        }

        printf("\n");
    }
}