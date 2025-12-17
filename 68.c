#include <stdio.h>


  void sequence(int n){
    int seq[n];
    for(int i=0;i<n;i++){
      seq[i]=(i*i+i+2)/2;
      printf("%d\n",seq[i]); 
    }}
    int main(){
     int n;
     printf("enter number of elemets of sequence u want:");
        scanf("%d",&n);
        sequence(n);
        
  
return 0;
}