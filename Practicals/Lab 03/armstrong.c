#include<stdio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%i", &num);

    int num_digits=0, temp=num, digit, sum=0;
    while(temp>0){
        num_digits++;
        // temp = temp / 10;
        temp /= 10;
    }

    temp=num;
    while(temp>0){
        digit=temp%10;
        long int power = 1;
        for(int i=0;i<num_digits;i++){
            power*=digit;
        }
        sum+=power;
        temp /=10;
    }
    if(sum==num)
        printf("%i is armstrong\n", num);
    else
        printf("%i is not armstrong\n", num);
}