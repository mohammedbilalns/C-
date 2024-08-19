#include <stdio.h>


int main(){

	int arr[50] , arrSize, elementToFind, elementToReplace;

	printf("Enter the size of the array: ");
	scanf("%d",&arrSize);

	while (1) {
	if(arrSize>50 || arrSize<=0){
		printf("Array size should be between 0 and 50 \n Reenter the size: ");	
	scanf("%d",&arrSize);
	}else{
			break;
		}
	}
	printf("Enter the elements in the array");
	for(int i=0;i< arrSize;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to find: ");
	scanf("%d",&elementToFind);
	printf("Enter the element to replace: ");
	scanf("%d",&elementToReplace);
	for(int i=0;i<=arrSize;i++){
		if(elementToFind == arr[i]){
			arr[i] = elementToReplace;
		}
	}
	for(int i=0;i<arrSize;i++){
		printf("%d",arr[i]);
	}
}
