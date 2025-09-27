#include <stdio.h>
float c2f(float c){
    return (9*c/5)+32;
}

int main(){
float c=5;
printf("%f\n",c2f(c));
return 0;
}