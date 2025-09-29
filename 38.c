#include <stdio.h>
int* address(int* a){
    return a;
}
int main(){
    int i=5;
    printf("the address of i is :%u\n",&i);

     int* j=&i;
     printf("the address of i is:%u\n",address(j));
      return 0;
  

}
    