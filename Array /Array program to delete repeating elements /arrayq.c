// write a program to delete repeating elements from the array 

#include <stdio.h>

int main(){
    int arr[50];
    int arrSize;
    printf("Enter the size of the array: ");
    scanf("%d",&arrSize);

    for(int i=0;i<arrSize;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array: ");
    for(int i=0;i<arrSize;i++){
        printf("%d\t",arr[i]);
    }

    for(int i=0;i<arrSize-1;i++){
        for(int j=i+1;j<arrSize;j++){
            if(arr[j] ==arr[i]){
                for(int k=j;k<arrSize-1;k++){
                    arr[k] = arr[k+1];
                }
                arrSize--;
                j--;
            }
        }

    }
    
    printf("\nArray after removal :");
     for(int i=0;i<arrSize;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}