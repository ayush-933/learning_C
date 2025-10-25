#include <stdio.h>
 typedef struct complex{
int real;
int imaginary;
}complex;
void complex_array(complex arr[]){
    for(int i=0;i<=4;i++){
        printf("%d+i%d\n",arr[i].real,arr[i].imaginary);
    }
}

int main(){
    complex com[5];

for(int j=0;j<=4;j++){
printf("enter a and b of complex number of the form a+ib:\n");
scanf("%d %d",&com[j].real,&com[j].imaginary);
}
     complex_array(com);
return 0;
}