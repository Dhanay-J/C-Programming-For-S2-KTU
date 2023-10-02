#include<stdio.h>

int main(){
    const double PI = 22.0/7;
    float rad, area;

    printf("Enter radius : ");
    scanf("%f", &rad);
    
    area = PI*rad*rad;
    printf("Area of circle with radius %.3f units is %.3f sq.units\n", rad, area);
}