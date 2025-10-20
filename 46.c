#include <stdio.h>
#include <string.h>

int main(){

 char password[11];
 printf("enter the password:");
    scanf("%10s", password);
    if (strcmp(password, "ayush00000") == 0)
    {
        printf("welcome king ayush");
    }
    else
    {
        printf("wrong password");
    }

return 0;
}