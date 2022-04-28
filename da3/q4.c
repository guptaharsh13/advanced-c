#include <stdio.h>
#define PI 3.14

struct rectangle
{
    int length;
    int breadth;
};

struct square
{
    int side;
};

struct circle
{
    int radius;
};

void calculateRectangleArea(struct rectangle r)
{
    printf("\nEnter the length of rectangle - ");
    scanf("%d", &r.length);
    printf("Enter the breadth of rectangle - ");
    scanf("%d", &r.breadth);
    int area = (r.length) * (r.breadth);
    printf("\nArea of rectangle - %d\n", area);
}

void calculateSquareArea(struct square s)
{
    printf("\nEnter the side of square - ");
    scanf("%d", &s.side);
    int area = (s.side) * (s.side);
    printf("\nArea of square - %d\n", area);
}

void calculateCircleArea(struct circle ci)
{
    printf("\nEnter radius of circle - ");
    scanf("%d", &ci.radius);
    float area = PI * (ci.radius) * (ci.radius);
    printf("\nArea of circle - %.2f\n", area);
}

void main()
{
    struct circle ci;
    calculateCircleArea(ci);
    struct rectangle r;
    calculateRectangleArea(r);
    struct square s;
    calculateSquareArea(s);
}