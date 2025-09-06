#include <stdio.h>

int main(){

char name[50];
int age;
int marks;

printf("enter your name:\n");
scanf("%s",name);
printf("enter your age: \n");
scanf("%d",&age);
printf("enter ur marks: \n");
scanf("%d",&marks);
printf("---student info---\n");
printf("name:%s\n",name);
printf("age:%d\n",age);
printf("marks:%d\n",marks);
return 0;
}