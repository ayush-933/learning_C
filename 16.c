#include <stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int i=n+1;
    while(i>1){
        i--;
        printf("%d\n",i);
    }
    return 0;
}