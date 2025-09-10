#include <stdio.h>
int main(){
    while(1){
    printf("enter the number:");
    int a;
    scanf("%d",&a);
    if(a>=0){
        printf("the number you entered :%d\n",a);}
        else{printf("exiting program...\n");
            break;}
    }
}
