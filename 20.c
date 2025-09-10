#include <stdio.h>
int main(){
   
    
    while(1){ printf("1.hello\n2.bye\n3.exit\n");
    printf("enter your choice:");
    int a;
    scanf("%d",&a);
        if(a==1){printf("hey\n");
        break;}
        else if(a==2){printf("bye\n");
        break;}
        else if(a==3){printf("exiting program...\n");
        break;}
        else{printf("invalid choice\n");
        continue;}
    }
return 0;
}