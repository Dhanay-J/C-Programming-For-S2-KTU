#include<stdio.h>

int main(){
    char str[50];
    printf("Enter a string : ");
    gets(str);

    int length=0, i=0;
    while (str[i]!='\0')
    {
        i++;
    }
    
    length=i-1;
    int half = length/2;
    for(i=0;i<half;i++){
        if(str[length]!=str[i]){
            printf("Given string is not palindrome\n");
            return 0;
        }
        length--;

    }
    printf("Given string is palindrome\n");
}