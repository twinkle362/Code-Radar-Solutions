// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int median=0;
    if(n%2==0){
        median=(arr[n/2]+arr[n/2-1])/2;
    }else{
        median=arr[n/2];
    }
    printf("%d",median);
}