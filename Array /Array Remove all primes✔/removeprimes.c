// Remove all Primes 
#include <stdio.h> 
void displayArray(int arr[],int size);

int isPrime(int n);
int main(){
	int arr[] = {33,5,-1,21,0,1,3,0,-13,430,56,-0,-22,0};
	int arrSize = sizeof(arr)/sizeof(arr[0]);

	printf("Array: ");
	displayArray(arr,arrSize);
	
	for(int i=0;i<arrSize;i++){
		if(isPrime(arr[i])==1){
			for(int j=i;j<arrSize-1;j++){
				arr[j]=arr[j+1];
			}
			arrSize--;
		}
	
	}
	printf("\nArray after removal of primes:");
	displayArray(arr,arrSize);
	return 0;
}

void displayArray(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
}

int isPrime(int n){
	if(n<=1){
	return 0;
	}else{
		for(int i=2;i*i<=n;i++){
			if(n%i==0){
			return 0;
			}
		}	
	}
	return 1;
	
}