#include "stdio.h"

int main(){
    int n=5,k=0;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){

        if(j>=n-i+1){
            printf("%c",'A'+k);
            k--;
        }else {
            printf(" ");
        }  
    }
        k+= 2*i+1;
    printf("\n");
   }
    return 0;
}