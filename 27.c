#include <stdio.h>
int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact*=i;
    }
    return fact;

}
void even(int b){

    if(b%2==0){printf("even");}
    else{printf("odd");}
}


int main(){
int x;
printf("enter the number:");
scanf("%d",&x);
printf("the factorial is %d\n",factorial(x));
even(x);
return 0;
}