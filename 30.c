#include <stdio.h>
int main(){
    char A;
    int a,b;
    printf("enter the shape:");
    scanf("%c",&A);
    printf("enter side/radius/height/base in a b format:");
    scanf("%d %d",&a,&b);
    int area_square=a*a;
    
    int area_rectangle=a*b;
    float area_circle=3.14*a*a;
    float area_triangle=0.5*a*b;


    switch(A){
        case 'S':
        printf("area of the square %d",area_square);
        break;
        case 'R':
        printf("area of the rectangle is %d",area_rectangle);
        break;
        case 'C':
        printf("area of the circle is %f",area_circle);
        break;
        case 'T':
        printf("area of the triangle is %.2f",area_triangle);
        break;
        default:
        printf("invalid input");
        break;

    }
    return 0;
    
}