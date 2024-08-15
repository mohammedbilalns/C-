#include <stdio.h>
int main()
{
    int i, j, lineCount, k = 0, l;
    printf("Enter the number of digits: ");
    scanf("%d", &lineCount);

    for (i = 1; i <= 2 * lineCount + 1; i++)
    {
        i <= lineCount ? k++ : k--;
        l = 1;

        for (j = 1; j <= lineCount; j++)
        {
            if (j >= lineCount - k + 1)
            {
                printf("%d", l);
                l++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}