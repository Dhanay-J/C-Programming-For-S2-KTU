#include<stdio.h>

int main(){
    int num;

    printf("Enter a  number : "); scanf("%i",&num);

    if(num<2){
        printf("%i is not prime\n", num);
        return 0;
    }
    else if(num==2){
        printf("2 is prime\n", num);
        return 0;
    }
    else{
        for(int i=2;i<num;i++){
            if(num%i==0){
                printf("%i is not prime\n", num);
                return 0;
            }
        }
    }
    printf("%i is prime\n", num);
}