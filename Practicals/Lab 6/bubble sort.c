#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements to be stored : ");scanf("%i", &n);
    int array[n];

    for(int i=0;i<n;i++){
        printf("Enter element %i : ", i+1); scanf("%i", &array[i]);
    }

    
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;i++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%i\t",array[i]);
    }
    printf("\n");
}