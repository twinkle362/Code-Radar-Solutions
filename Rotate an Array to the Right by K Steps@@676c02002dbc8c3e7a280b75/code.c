// // Your code here...
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n],temp[n];
//     int k;
    
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     scanf("%d",&k);
//     k=k%n;
//     for (int i = 0; i < k; i++) {
//         temp[i] = arr[n-k+i];  
//     }

//     for (int i =0; i < n-k; i++) {
//         temp[k+i] = arr[i];  
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",temp[i]);
//     }
//     return 0;
// }
#include<stdio.h>
void rotate(int n,int arr[n],int k){
    int tem;
    while(k>=1){
    for(int i=1;i<n;i++){
        tem=arr[0];
        arr[0]=arr[i];
        arr[i]=tem;
        }
        k--;
    }
     for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    rotate(n,arr,k);
}