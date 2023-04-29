#include<stdio.h>
#include<string.h>
#define max 200
int main(){
    char name[max];
    int len;
    printf("Enter the name :  ");
    scanf("%s",&name);
    len=strlen(name);
    int fr[max];
    for(int i=0;i<len;i++){
        fr[i]=-1;
    }
    int count=0;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(name[i]==name[j]){
                count++;
                fr[j]=0;
            }
        }
    }
    int count1=0;
    for(int i=0;i<len;i++){
        if(fr[i]==0){
            count1++;
        }
    }
    printf("\nLength of the string : %d",len);
    printf("\nWord Frequency : %d",len-count1);
    
    if(len==(len-count1)){
        printf("\nNo repetitions found");
    }
    else{
        for(int i=0;i<len;i++){
        int count3=0;
        for(int j=i+1;j<len;j++){
            if(name[i]==name[j]){
                count3++;
            }
        }
        if(count3!=0){
            printf("\nThe first repeated character is : %c",name[i]);
            break;
        }
        else{
            continue;
        }
        
    }
    }
    
    
    
    for(int i=0;i<len;i++){
        int count2=0;
        for(int j=i+1;j<len;j++){
            if(name[i]==name[j]){
                count2++;
            }
        }
        if(count2==0){
            printf("\nFirst non-repeated character is : %c",name[i]);
            break;
        }
        else{
            continue;
        }
    }

    return 0;
}