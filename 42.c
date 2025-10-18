#include <stdio.h>
void array(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void reversearray(int arr[], int n){
  
   int temp;
    for(int i=0;i<n/2;i++){
         
     
         temp=arr[i];
         arr[i]=arr[n-i-1];
         arr[n-i-1]=temp;
          
    }
}
int main(){
    
int arr[10]={1,2,3,4,5,6,7,8,9,10};
array(arr,10);
reversearray(arr,10);
array(arr,10);

return 0;
}