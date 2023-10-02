#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements to be stored : ");scanf("%i", &n);
    int array[n];

    for(int i=0;i<n;i++){
        printf("Enter element %i : ", i+1); scanf("%i", &array[i]);
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=array[i];
    }
    printf("Sum of elements in array : %i\n", sum);

}