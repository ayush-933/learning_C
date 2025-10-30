#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr;
    arr=(int*)malloc(5*sizeof(int));
    arr=(int*)realloc(arr,10*sizeof(int));
    
    for(int i=0;i<=9;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<=9;i++){
        printf("%d\n",arr[i]);

    }
free(arr);
 
return 0;
}