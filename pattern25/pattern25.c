#include <stdio.h>
int main()
{
    int i, j, lineCount, k, m;
    printf("Enter the number of lines: ");
    scanf("%d", &lineCount);

    for (i = 1; i <= lineCount; i++)
    {
        k = 'A', m = 0;
        for (j = 1; j <= 2 * lineCount; j++)
        {
            if (j >= lineCount - i + 1 && j <= lineCount + i)
            {
                if (j == lineCount + 1)
                {
                    k = '1';
                }

                printf("%c", k);
                k++;
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}