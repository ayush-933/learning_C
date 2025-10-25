#include <stdio.h>

struct integers{
    int p;
}p;

int main(void){
    struct integers i;
    i.p = 10;
    struct integers *ptr = &i;
    printf("%d", ptr->p);

    return 0;
}