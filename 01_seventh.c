#include <stdio.h>

int main(){
    int A;
    int B;
    printf("the first number:");
    scanf("%d",&A);
    printf("the second number:");
    scanf("%d",&B);
    printf("sum:%d\n",A+B);
    printf("substraction:%d\n",A-B);
    printf("product:%d\n",A*B);
    printf("division:%1f\n", (float)A/B);
    return 0;
}