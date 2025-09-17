#include <stdio.h>
int main(){
    int a,b;
    char op;
    printf("enter operation between two numbers:");
    scanf("%d %c %d",&a,&op,&b);
    switch(op){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
printf("%d",a-b);
break;
case '*':
printf("%d",a*b);
break;
case '/':
if(b==0){
printf("division by zero not possible");}
 else{printf("%d",a/b);}
break;
case'%':
printf("%d",a%b);
break;
default:
printf("invalid operator");
break;
        }
        return 0;
    }

