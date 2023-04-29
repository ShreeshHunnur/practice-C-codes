#include<stdio.h>
#include<conio.h>
#include<math.h>
void prime(int n){
    int countp=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            countp++;
        }
    }
    if(countp==0){
        printf("\n%d is a prime number",n);
    }
    else{
        printf("\n%d is not a prime number",n);
    }
}
void armstrong(int n){
    int temp=n,sum=0,digit=0;
    while(temp!=0){
        temp=temp/10;
        ++digit;
    }
    temp=n;
    while(temp>0){
        int r=temp%10;
        sum+=pow(r,digit);
        temp=temp/10;
    }
    if(sum==n){
        printf("\n%d is a armstrong number",n);
    }
    else{
        printf("\n%d is not a armstrong number",n);
    }
}

void perfect(int n){
    int sump=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sump+=i;
        }
    }
    if(sump==n){
        printf("\n%d is a perfect number",n);
    }
    else{
        printf("\n%d is not a perfect number",n);
    }
}
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    prime(num);
    armstrong(num);
    perfect(num);
    return 0;
}