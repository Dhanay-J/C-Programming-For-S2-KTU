#include<stdio.h>

int main(){
    float a,b,c,d,e,f,g;

    printf("Enter values for a,b,c,d,e,f,g : ");
    scanf("%f %f %f %f %f %f %f", &a,&b,&c,&d,&e,&f,&g);
    
    float result = ((a-b/c*d+e)*(f+g));
    printf("Result of ((a-b/c*d+e)*(f+g)) = %.3f\n",result);
}