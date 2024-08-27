#include "stdio.h"


int main(){

  int n = 4,k=1;

  for(int i=1;i<=n;i++){
    k += i-i%2;
    for(int j=1;j<=i;j++){
      printf("%d ",k);
      if(i%2==1 && j<i){
        k++;
      }else if (i%2==0 && j<i) {
        k--;
      }
    }
    printf("\n");
  }

  return 0;
}