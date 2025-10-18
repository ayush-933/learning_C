#include <stdio.h>
int main(){

 int arr[10];
 for(int n=0;n<10;n++){
    arr[n]=5*(n+1);
 }
  for(int n=0;n<10;n++){
    printf("the product of %d x %d is %d\n",5,n+1,arr[n]);
  }
return 0;
}