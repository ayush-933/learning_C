#include <stdio.h>
int main(){
    int i=67;
    int* j=&i;
    printf("the address if i is:%d\n",*&i);
        printf("the address of i is:%p",*&j);

        return 0;
}