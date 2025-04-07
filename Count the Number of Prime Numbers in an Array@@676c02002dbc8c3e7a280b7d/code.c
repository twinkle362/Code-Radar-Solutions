// Your code here...
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int count=0;
//     for(int i=0;i<n;i++){
//         int a=arr[i];
//         if(a<=1){
//             continue;
//         }else{
//             int isprime=1;
//             for(int i=2;i*i<=a;i++){
//                 if(a%i==0){
//                     isprime=0;
//                     break;
//                 }
//             }if(isprime){
//                 count++;
//             }
//         }
//     }
//     printf("%d",count);
// }
#include<stdio.h>
int check(int n, int arr[n]){
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                ans+=1;
                break;
            }
        }
    }
    return ans;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",check(n,arr));
    return 0;
}