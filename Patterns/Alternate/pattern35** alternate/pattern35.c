#include <stdio.h>
int main()
{
    int i, j, lineCount, k = 0, p;
    printf("Enter the number of lines: ");
    scanf("%d", &lineCount);

    for (i = 1; i <= lineCount; i++)
    {
        if (i % 2 == 1)
        {
            k = k + 1;
        }
        else
        {
            k--;
            k = k + i;
        }
        p = k;
        for (j = 1; j <= 2 * lineCount - 1; j++)
        {
            if (j <= 2 * i - 1)
            {
                if (j % 2 == 0)
                {
                    printf("*");
                }
                else
                {
                    printf("%d", p);
                    (i % 2 == 1) ? p++, k++ : p--;
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
