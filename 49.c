#include <stdio.h>
struct vector{
    int i;
    int j;
};
void sum_of_vectors( struct vector v1,struct vector v2){
    int vector_sum_i=v1.i+v2.i;
    int vector_sum_j=v1.j+v2.j;
    printf("sum of the vectors is: %d i+%d j",vector_sum_i,vector_sum_j);
}


int main(){
    struct vector v1={2,3};
    struct vector v2={4,5};
    sum_of_vectors(v1,v2);

 
return 0;
}