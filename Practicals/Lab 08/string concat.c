#include<stdio.h>

#define StrSize 50

int main(){
    char str1[StrSize];
    printf("Enter string 1 (must end with $ ): ");
    gets(str1);

    char str2[StrSize];
    printf("Enter string 2 (must end with $ ): ");
    gets(str2);

    int j=0, i=0;
    while (str1[i]!='$')
    {
        i++;
        if(i>StrSize){
            printf("The concatenation faild!\n");
            return 0;
        }   
    }

    while (str2[j]!='$')
    {
        str1[i]=str2[j];
        i++;j++;
        if(j>StrSize){
            printf("The concatenation faild!\n");
            return 0;
        }
    }
            
    printf("The concatenated string : %s\n", str1);
    

}