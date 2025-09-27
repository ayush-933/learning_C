#include <stdio.h>
float force(float m){
    return m*9.8;

}int main(){
    float m;
    printf("enter the mass of the object:");
    scanf("%f",&m);
    printf("the force of attraction is %f",force(m));
    return 0;
}