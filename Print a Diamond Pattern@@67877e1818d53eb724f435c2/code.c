// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>0;j--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int j=1;j<=i-1;j++){
            printf("*")
        }
        printf("\n");
    }
    for(int i=1;i<n;i++){
        for(int j=1;i<=n;i++){
            printf(" ");
        }
        for(int j=n;j>0;j--){
            printf("*");
        }
        for(int j=n-1;j>0;j--){
            printf("*");
        }
    }
    return 0;
}