#include <stdio.h>
int main(){

 FILE *ptr;
 ptr=fopen("file4.txt","a");
 int multi;
 for(int i=1;i<=10;i++){
multi=5*i;
fprintf(ptr,"%d\n",multi);
 }
return 0;
}