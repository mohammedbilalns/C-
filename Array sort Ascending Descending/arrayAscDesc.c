#include <stdio.h>

void sortArray(int arr[], int size){
	for(int i=0; i<size-1;i++){
		for(int j=i+1; j<size; j++){
			if (arr[j]<arr[i]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

			}
		}
	}

for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
}

int main(){

	int arr[] = {3,6,2,9,1,6,2,5,6};
	int arrSize = sizeof(arr)/sizeof(arr[0]);

	sortArray(arr, arrSize);

}
