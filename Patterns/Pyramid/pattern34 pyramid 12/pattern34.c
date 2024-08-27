#include <stdio.h>
int main()
{
    int i, j, lineCount, k;
    printf("Enter the number of lines: ");
    scanf("%d", &lineCount);

    for (i = 1; i <= lineCount; i++)
    {
        k = i;
        for (j = 1; j <= 2 * lineCount - 1; j++)
        {
            if (j >= lineCount - i + 1 && j <= lineCount + i - 1)
            {
                printf("%d", k);
                j < lineCount ? k-- : k++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}