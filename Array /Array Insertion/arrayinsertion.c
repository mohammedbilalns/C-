#include <stdio.h>
// Insert Element at any position 
void displayArray(int arr[],int  size){
	printf("Array is : ");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[50], arrSize,elementToadd, positionToadd ; 
	printf("Enter the size of array:  ");
	scanf("%d",&arrSize);
	if(arrSize >50 || arrSize<=0){
		printf("Array size should be between 1 and 50");
		return 1;
	} else{
		printf("Enter the elements of the array: ");

		for(int i=0;i< arrSize;i++){
			scanf("%d", &arr[i]);
		}
		displayArray(arr, arrSize);
		printf("Enter the element to add: ");
		scanf("%d",&elementToadd);
		printf("Enter the position to add: ");
		scanf("%d",&positionToadd);
		if(positionToadd >arrSize+1 || positionToadd <1){
			printf("Invalid position. It should be between 1 and %d \n",arrSize);
		}else if (arrSize >= 50) {
			printf("Cannot add the element, array is already full (size 50)\n");
		}else{
			for(int i=arrSize;i>=positionToadd;i--){

				arr[i+1] = arr[i];
				
			}
			arr[positionToadd-1] = elementToadd;
			arrSize++;
			displayArray(arr,arrSize);
		}
	}





	
	return 0; 
}
