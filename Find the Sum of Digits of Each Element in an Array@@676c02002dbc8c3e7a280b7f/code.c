// // Your code here...
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n],sumarr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         int a=abs(arr[i]);
//         int sum=0;
//         while(a>0){
//             sum+=a%10;
//             a=a/10;
//         }
//         sumarr[i]=sum;
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",sumarr[i]);
//     }
// }
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int n=arr[i];
        int ans=0;
        while(n>0){
            int r=n%10;
            n=n/10;
            ans+=r;
        }
        arr2[i]=ans;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}