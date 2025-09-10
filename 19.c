#include <stdio.h>
int main(){
    int b=3;
    for(int a=1;a<=20;a++){
        if(a%b==0){continue;}
        printf("%d\t",a);

    }
    return 0;
}