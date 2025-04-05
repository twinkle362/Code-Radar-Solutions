// // Your code here...
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int target;
//     int position=-1;
//     scanf("%d",&target);
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             position=i;
//             break;
//         }else{
//             continue;
//         }
//     }
//     if(position> -1){
//         printf("%d",position);
//     }else{
//         printf("-1");
//     }
//     }
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            printf("%d",i);
            return 0;
        }
        else{
            return -1;
        }

    }
}