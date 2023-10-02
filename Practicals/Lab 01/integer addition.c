#include<stdio.h>

int main(){
    int num1,num2,num3;

    printf("Enter three numbers : ");
    scanf("%i %i %i", &num1,&num2, &num3);

    if((num1>num2) && (num1>num3)){
        printf("%i is largest\n", num1);
    }
    else if(num2>num3){
        printf("%i is largest\n", num2);
    }
    else{
        printf("%i is largest\n", num3);
    }
}