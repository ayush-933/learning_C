#include <stdio.h>
int main() {
    int arr[6], sum = 0;

    printf("Enter 6 numbers:\n");
    for(int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);   // take array input
    }

    for(int i = 0; i < 6; i++) {
        sum += arr[i];   // add each element
    }

    printf("The sum is: %d\n", sum);

    return 0;
}
