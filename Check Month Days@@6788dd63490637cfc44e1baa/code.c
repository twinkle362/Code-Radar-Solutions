
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==2){
        printf("28");
    }
    else if(n<=7){
        if(n%2==0){
            printf("30");
        }
        else{
            printf("31");
        }
    }
    else if(13>n>7){
        if(n%2==0){
            printf("31");
        }
        else{
            printf("30");
        }
    }
    else{
        printf("Invalid month")
    }
}