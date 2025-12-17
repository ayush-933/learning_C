#include <stdio.h>

int main() {
    int arr[] = {12, 4, 1, 8, 6};
    int target;
    printf("Enter the target: ");
    scanf("%d", &target);

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {  // start from i+1 to avoid repeats and self-pair
            if (arr[i] + arr[j] == target) {
                printf("Indices: %d, %d\n", i, j);
                printf("Values: %d + %d = %d\n", arr[i], arr[j], target);
                return 0;  // stop after finding one pair
            }
        }
    }

    printf("No pair found that sums to %d\n", target);
    return 0;
}
