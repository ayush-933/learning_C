#include <stdio.h>
#include <string.h>
int main(){

 char id[10];
 char password[10];
 printf("enter your id:");
    scanf("%s",id);
 printf("enter your password:");
 scanf("%s",password);
 switch(strcmp(id,"useriiit")){
 default:
        printf("invalid id\n");
        break;
     case 0:
        switch(strcmp(password,"iiit1234")){
                default:
            printf("invalid password\n");
            break;
        
        case 0:
            printf("login  succesfull\n");
            break;
        }
        break;
 }
return 0;
}