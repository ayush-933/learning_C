#include <stdio.h>
int tribonacci(int n){
    if(n==0){
        return 0;
    
    }
    else if(n==1||n==2){
        return 1;
    }
    else{
    return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);}
}
int main(){
 int n;
 printf("enter the value of n:");
 scanf("%d",&n);
 printf("the %dth term of the tribonacci series is:%d",n,tribonacci(n));
 
return 0;
}