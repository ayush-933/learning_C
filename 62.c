#include <stdio.h>
#include <stdlib.h>

int main(){
   
    int *arr;
    arr=(int*)malloc(10*sizeof(int));
    
    for(int i=0;i<10;i++){
        arr[i]=7*(i+1);

        printf("%d\n",arr[i]);
    }
    (int*)realloc(arr,15*sizeof(int));
     for(int i=0;i<15;i++){
        arr[i]=7*(i+1);

        printf("%d\n",arr[i]);
    }
free(arr);
    return 0;
}