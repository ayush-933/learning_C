#include <stdio.h>
#include <math.h>

double area(int tri[3]) {
    int a = tri[0], b = tri[1], c = tri[2];
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int findtriarea(int tri[3]) {
    int a = tri[0], b = tri[1], c = tri[2];

    if (a + b > c && b + c > a && c + a > b) {

        if (a == b && b == c) {
            printf("It's an equilateral triangle\n");
        }
        else if (a == b || b == c || a == c) {
            printf("It's an isosceles triangle\n");
        }
        else {
            printf("It's a scalene triangle\n");
        }

        printf("Area of the triangle is: %.2lf\n", area(tri));
        return 1;   // valid triangle
    }
    else {
        printf("Invalid triangle\n");
        return -1;  // invalid triangle
    }
}

int main() {
    int tri[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter side %d of triangle: ", i + 1);
        scanf("%d", &tri[i]);
    }

    findtriarea(tri);
    return 0;
}
