#include <stdio.h>
int main()
{
    int i, j, lineCount, k;
    printf("Enter the number of lines: ");
    scanf("%d", &lineCount);

    for (i = 1; i <= lineCount; i++)
    {
        k = 0;
        for (j = 1; j <= lineCount; j++)
        {
            if (j <= i)
            {
                printf("%d ", k);
                k = k + i - 1;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}