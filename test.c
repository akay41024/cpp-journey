#include <stdio.h>

void triangleType(int side1, int side2, int side3) {
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Invalid input: Provide posotive integer number\n");
        return;
    }

    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        printf("The given sides do not form a triangle\n");
        return;
    }

    if (side1 == side2 && side2 == side3) {
        printf("The triangle is an Equilateral triangle\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("The triangle is an Isosceles triangle\n");
    } else {
        printf("The triangle is a Scalene triangle\n");
    }
}

int main() {
    int side1, side2, side3;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    triangleType(side1, side2, side3);

    return 0;
}
