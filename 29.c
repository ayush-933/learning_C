#include <stdio.h>
int main(){
    int a;
    char A='A',B='B',C='C',D='D';
    printf("enter your marks:");
    scanf("%d",&a);
    switch(a){
        case 90 ... 100:
        printf("%c",A);
        break;
        case 80 ... 89:
        printf("%c",B);
        break;
        case 70 ... 79:
        printf("%d",C);
        break;
        case 60 ... 69:
        printf("%d",D);
        break;
        default:
        printf("fail");
        break;
    }
    return 0;
    }

