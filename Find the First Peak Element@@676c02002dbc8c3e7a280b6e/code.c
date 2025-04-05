#include<stdio.h>
int main(){
    int check(int n,int arr[n]){
        for(int i=2;i<n;i++){
            if(arr[i-2]<arr[i-1]>arr[i]){
                return arr[i];
            }
        }
    }
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",check(n,arr));
    
}