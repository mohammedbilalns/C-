#include <stdio.h>

int main()
{
    int i, j, lineCount;
	printf("Enter the number of lines \n ");
	scanf("%d",&lineCount);

    for (i = 1; i <= lineCount; i++) {
        for (j = 1; j <= lineCount; j++) {
            if (j <= lineCount - i) {
                printf(" ");
            } else {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}

