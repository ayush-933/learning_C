#include <stdio.h>
int even(int a){
    if(a%2==0)
    return 1;
    else return 0;
}
int main(){int x;
    printf("enter a number:");
    scanf("%d",&x);
    printf("%d",even(x));
 return 0;} 
