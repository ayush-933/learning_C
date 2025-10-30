#include <stdio.h>
#include <stdlib.h>
int main(){

 int* arr;
 arr = malloc(6 * sizeof(int));
 if (arr == NULL) {
    perror("malloc");
    return 1;
 }
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
  arr[5] = 6;
 for(int i=0;i<5;i++){
    printf("%d\n",arr[i]);
 }
 free(arr);
 return 0;
}