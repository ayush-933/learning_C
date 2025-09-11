#include <stdio.h>
int main(){
    int arr[10];
    printf("enter 10 numbers:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=10;i>=0;i--){
        printf("%d\n",arr[i]);
    }
    return 0;
}