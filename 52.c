#include <stdio.h>
int main(){
FILE *ptr;
ptr=fopen("FILE1.txt","r");
int num;
fscanf(ptr,"%d",&num);
printf("the number is  %d \n",num );
 
fscanf(ptr,"%d",&num);
printf("the number is %d \n",num );
 
return 0;
}