#include <stdio.h>
int main(){
           
           int n;
           printf("enter the numbere of rows\n");
scanf("%d",&n);

           for(int r=1;r<=n;r++){
            for(int c=1;c<=r;c++){
                printf("*");
                printf(" ");
            }printf("\n");

            }
            return 0;
           }
           
