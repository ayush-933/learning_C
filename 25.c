#include <stdio.h>
int add(int a,int b){
    return a+b;}
int main(){
    int x,y;
    printf("enter first number:");
    scanf("%d",&x);
    printf("\nenter the second number:");
    scanf("%d",&y);
    printf("sum=%d\n",add(x,y));
    return 0;
}
