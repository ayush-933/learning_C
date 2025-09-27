#include <stdio.h>
float avg(int a,int b,int c){
   return a+b+c/3.0;
}
int main(){
    int a,b,c;
    printf("enter 3 numbers:");
    scanf("%d\n %d\n %d",&a,&b,&c);
printf("the average of the 3 numbers is %f",avg(a,b,c));
return 0;
    
}