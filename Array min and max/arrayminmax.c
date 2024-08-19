#include <stdio.h>

int arrayMin(int arr[], int size){

	int min = arr[0];
	for(int i=1;i<size;i++){
		if(arr[i]<min){
			min = arr[i];

		}
	}
	return  min;
}
int arrayMax(int arr[], int size){
	int max = arr[0];
	for(int i=1;i<size;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;
}
int main(){

	int arr[50], arrSize;

	while(arrSize<=0 || arrSize>=50){
		printf("Enter the size of the array: ");
		scanf("%d",&arrSize);
		if(arrSize<=0 || arrSize >= 50){
			printf("Error: Invalid array size , please enter a number between 1 and 50");
		}
	}

	for(int i=0;i<arrSize;i++){
		scanf("%d",&arr[i]);
	}
	int min = arrayMin(arr, arrSize);
	int max = arrayMax(arr, arrSize);

	printf("max: %d , min: %d ",max,min);



	
}
