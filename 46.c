#include <stdio.h>
#include <string.h>

int main(){

 char password[11];
 gets(password);
 printf("enter the password:");
    scanf("%s", password);
    if (strcmp(password, "ayush 00") == 0)
    {
        printf("welcome king ayush");
    }
    else
    {
        printf("wrong password");
    }

return 0;
}