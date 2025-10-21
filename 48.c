#include <stdio.h>

 void slice( const char str[], int a, int b){
    /* print each character from index a (inclusive) to b (exclusive), three times */
    for(int i = a; i < b && str[i] != '\0'; i++){
       
        char count = str[i];
        
            printf("%c", count);
        }
    
    printf("\n");
     for(int j = b; str[j] != '\0'; j++){
       
        char count = str[j];
        
            printf("%c", count);
        }
    
 }

 int main(){
    const char s[] = "Hello";
    slice(s, 0, 4);
    return 0;
}