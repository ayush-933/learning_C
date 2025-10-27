#include <stdio.h>

int main() {

    printf("Enter the name of the first employee: ");
    char name1[20], name2[20];
    int salary1, salary2;
    scanf("%s", name1);

    printf("Enter the name of the second employee: ");
    scanf("%s", name2);

    printf("Enter the salary of the first employee: ");
    scanf("%d", &salary1);

    printf("Enter the salary of the second employee: ");
    scanf("%d", &salary2);

    FILE *salary;
    salary = fopen("file6.txt", "w");

    fprintf(salary, "%s", name1);
    fprintf(salary, "%c", ',');
    fprintf(salary, "%d", salary1);
    fprintf(salary, "%c", '\n');

    fprintf(salary, "%s", name2);
    fprintf(salary, "%c", ',');
    fprintf(salary, "%d", salary2);

    fclose(salary);

    return 0;
}
