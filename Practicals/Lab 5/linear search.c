#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements to be stored : ");scanf("%i", &n);
    int array[n];

    for(int i=0;i<n;i++){
        printf("Enter element %i : ", i+1); scanf("%i", &array[i]);
    }

    int key, found=0;
    printf("Enter key to search : "); scanf("%i", &key);

    
    for(int i=0;i<n;i++){
        if(key==array[i]){
            printf("%i is found at position %i\n", key,i+1);
            found=1;
        }
    }
    if(!found)
        printf("%i is not in the array\n", key);

}