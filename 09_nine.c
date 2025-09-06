#include <stdio.h>

int main(){
int a;
int b;
scanf("%d",&a);
scanf("%d",&b);
if(a>0 && b>0){
    printf("both number are positive\n");
}
else if( a<0 || b<0){
    printf("at least one number is negative\n");
    return 0;
}
}