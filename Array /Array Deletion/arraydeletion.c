#include <stdio.h>

void displayArray(int arr[], int size){
	printf("Elements in the array are: ");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
}

int main(){
	int arr[50], arrSize,positionToDelete, isPositionValid =0;

	printf("Enter the size of the array: ");
	scanf("%d",&arrSize);

	if(arrSize>50){
		printf("Array size should be less than 50");
		return 1;
	}

	printf("Enter elements in the array: ");
	for(int i=0;i<arrSize;i++){
		scanf("%d",&arr[i]);
	}
	displayArray(arr, arrSize);
	while(isPositionValid == 0){
		printf("Enter the position to delete: ");
		scanf("%d",&positionToDelete);
		if(positionToDelete> arrSize || positionToDelete<1){
			printf("Array has only %d elements, reenter the position",arrSize);
		}else {
		isPositionValid =1;
		}
	}
	for(int i=positionToDelete-1;i<=arrSize-2;i++){
		arr[i] =arr[i+1];
	}
	arrSize--;
	displayArray(arr, arrSize);


	return 0;
}
