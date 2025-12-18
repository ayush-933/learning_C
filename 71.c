#include <stdio.h>

typedef struct students {
    char name[20];
    int id;
    float marks;
} x;

int main() {
    x s[10], temp;

    // Input
    for (int i = 0; i < 10; i++) {
        printf("Enter name, id, marks of student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].id, &s[i].marks);
    }

    // Bubble sort (descending order of marks)
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (s[j].marks < s[j + 1].marks) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    // Output ranks
    printf("\n--- Student Ranks ---\n");
    for (int j = 0; j < 10; j++) {
        printf("Rank %d -> Name: %s | ID: %d | Marks: %.2f\n",
               j + 1, s[j].name, s[j].id, s[j].marks);
    }

    return 0;
}
