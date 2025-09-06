#include <stdio.h>
int main(){
    int a;
    int b;

    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("sum:%d\n",a+b);
    printf("substraction:%d\n",a-b);
    printf("product:%d\n",a*b);
    printf("division: %f\n", (float)a / b);
    printf("remainder:%d\n",a%b);
    if(a>b){
             printf("a is greater than b\n");
    }
    else if(b>a){
                 printf("b is greater than a\n");
    }
    else {
              printf("a and b are equal\n");
    }
      return 0;
    }