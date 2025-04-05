#include<stdio.h>

int check(int n, int arr[n]) {
    for(int i = 2; i < n; i++) {
        if(arr[0] >arr[1]){
            return arr[0];
        }
        else if(arr[i-2] < arr[i-1] && arr[i-1] > arr[i]) {
            return arr[i-1];
        }
        else if(arr[n-1] >arr[n-2]){
            return arr[n-1];
        }
    }
    return -1; 
}
int main(){
    
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("%d",check(n,arr));
    
}