#include <stdio.h>
int main(){
FILE *ptr;
ptr=fopen("FILE1.txt","w");
int num;
num=555;
fprintf(ptr,"%d",num);
 fclose(ptr);
return 0;
}