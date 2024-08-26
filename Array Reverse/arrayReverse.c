#include <stdio.h>

void displayArray( int arr[], int size){
	printf("Array is: ");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}

	printf("\n");

}
int main(){

	int arr[] = {54,78,61,78,123,478};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	displayArray(arr, arrSize);

	for(int i=0;i<arrSize/2;i++){
		int temp = arr[i];
		arr[i] = arr[arrSize-i-1];
		arr[arrSize-i-1] = temp;
	}
	printf("Reversed ");
	displayArray(arr, arrSize);
}
