#include <stdio.h>
int main(){
    int a=0;
int arr[]={-1,2,-13,4,-34,-64,3,65,5,-35,-56,-43,42};
for(int i=0;i<13;i++){
if(arr[i]<0){
a=a+1;
}

}
printf("the number of negative numbers in the given array is %d",a);

 
return 0;
}