#include<stdio.h>
#include<string.h>
#define max 200
int main(){
    char str[max];
    int countw=0,countv=0,countsc=0;
    printf("Enter the Sentence : ");
    fgets(str,max,stdin);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]==' '){
            countw++;
        }
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
            countv++;
        }
        if(str[i]=='@'||str[i]==','||str[i]=='.'||str[i]=='*'||str[i]=='&'){
            countsc++;
        }
    }
    printf("\nWords = %d",countw+1);
    printf("\nVowels = %d",countv);
    printf("\nConsonants = %d",len-countv-countw-countsc-1);
    printf("\nSpaces = %d",countw);
    printf("\nSpecial Characters = %d",countsc);

    return 0;
}