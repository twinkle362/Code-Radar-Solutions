// Your code here...
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(arr[i]*arr[j]>max){
            max=arr[i]*arr[j];
        }
        }
    }
    printf("%d",abs(max));
    
    
   
}