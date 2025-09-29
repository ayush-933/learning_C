#include <stdio.h>
void change_value_30_times(int* a){
    *a=*a*30;
}
int main(){
    int i=25;
    int* j=&i;
    printf("the previous value of i is:%d\n",*j);
    change_value_30_times( j);
    printf("the new value of i is:%d\n",*j);
    return 0;
}