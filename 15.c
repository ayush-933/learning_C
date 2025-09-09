#include <stdio.h>
int main(){
    int n;
    printf("enter the number of first natural numbers you want sum of:");
    scanf("%d",&n);
    int sum;
    int i=1;
    sum=0;
    while(i<=n){
        sum=i+sum;
        i++;
        }
    printf("the sum of first %d natural numbers is %d\n",n,sum);
    return 0;

}