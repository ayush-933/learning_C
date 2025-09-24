#include <stdio.h>
int factorial(int n){
    
 
    if (n==0||n==1){return 1;}
return factorial(n-1)*n;}
int main (){
    int a;
    printf("enter a number:");
scanf("%d",&a);
printf("factorial of the number is:%d\n",factorial(a));
return 0;
}
