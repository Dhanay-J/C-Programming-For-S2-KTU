#include<stdio.h>

#define StrSize 50

int main(){
    // ASCII value range
    // a = 97, z=122
    // A = 65, Z=90

    char str[StrSize];
    printf("Enter string (must end with $ ): ");
    gets(str);

    int SpaceCount=0,VowelCount=0,ConsonentCount=0, i=0;
    while (str[i]!='$')
    {
        // Typecasting char to int
        int rep = (int)str[i];
        if((str[i]=='a') || (str[i]=='e')|| (str[i]=='i')|| (str[i]=='o')|| (str[i]=='u')|| (str[i]=='A')|| (str[i]=='E')|| (str[i]=='I')|| (str[i]=='O')|| (str[i]=='U'))   
            VowelCount++;
        else if(str[i]==' ')
            SpaceCount++;
        
        else if( ((rep<91) && (rep>64)) || ((rep<123) && (rep>96)) )
            ConsonentCount++;
        
        i++;
        if(i==StrSize+1){
            printf("Error!\n");
            return 0;
        }

    }
            
    printf("Number of vowels in string : %i\n", VowelCount);
    printf("Number of consonants in string : %i\n", ConsonentCount);
    printf("Number of spaces in string : %i\n", SpaceCount);
    

}