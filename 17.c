#include <stdio.h>
int main(){
      int a;
    do{
        printf("1.hey\n2.your orders:\n3.exit\n");
       
        printf("enter your choice:");
       
        scanf("%ds",&a);
    if(a==1){
        printf("hey\n");}
    else if (a==2){
        printf("enter your orders:\n");

    
}
else if(a==3){printf("exit\n");}
else{printf("invalide choice\n");
}
}
while(a!=3);
return 0;
    }
    

