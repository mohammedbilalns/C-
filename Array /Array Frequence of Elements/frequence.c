#include <stdio.h>

int main(){
	int frequenceArr[50];
	int arr[] = {4,5,3,2,6,4,2,1,5,6,3,4,6};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<arrSize;i++){
		frequenceArr[i]=1;
	}

	for(int i=0;i<arrSize ;i++){
		if(frequenceArr[i] !=0){
		for(int j=i+1;j<arrSize ;j++){

				if(arr[i] == arr[j] && frequenceArr[j] !=0){
					frequenceArr[j] = 0;
					frequenceArr[i]++;
				}
			}
			
		}
	}

	for(int i=0;i<arrSize ;i++){
		if(frequenceArr[i] != 0 ){

			printf("Frequencey of %d is %d\n",arr[i],frequenceArr[i]);

		}
	}

}
