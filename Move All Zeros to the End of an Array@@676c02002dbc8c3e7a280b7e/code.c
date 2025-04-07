// // Your code here...
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int index=0;
//     for(int i=0;i<n;i++){
//         if (arr[i]!=0){
//            arr[index]=arr[i];
//            index++;
//         }
//     }
//     while(index<n){
//         arr[index]=0;
//         index++;
//     }
//     for(int i=0;i<n;i++){
//        printf("%d ",arr[i]);
//     }
// }
#include<stdio.h>
void swipe(int n,int arr[n]){
    for(int i=1;i<n;i++){
        if(arr[i-1]==0){
            int tem;
            tem=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=tem;
        }
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
    swipe(n,arr);
    return 0;
}