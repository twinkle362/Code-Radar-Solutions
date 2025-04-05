// // Your code here...
// #include <stdio.h>

// int main() {
//     int n, arr[100], i, j, missing = 1;
//     scanf("%d", &n);

//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for (i = 1; ; i++) { 
//         int found = 0;
//         for (j = 0; j < n; j++) {
//             if (arr[j] == i) {
//                 found = 1;
//                 break;
//             }
//         }
//         if (!found) {
//             missing = i;
//             break;
//         }
//     }

//     printf("%d\n", missing);
//     return 0;
// }
#include<stdio.h>
void bubbleSort(int arr[], int n) {
    int ans;

    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    if(n==1){
        printf("%d",1);
        return;
    }
    for(int i=1;i<n;i++){
        if(arr[i-1]!=arr[i]-1){
            ans=arr[i-1]+1
            break;
        }

        else {
            ans=arr[n-1]+1;
            break;
        }
    }
    if (ans<=0){
        printf("%d",1)
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n);
}
// #include<stdio.h>
// void bubbleSort(int arr[], int n) {

//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];

//     bubbleSort(arr,n);

//     for(int i=0;i<n;){
//         if(arr[i]>0){
//             if(arr[i]==1){
//                for(int j=i;j<n;j++){
//                 if(arr[j+1]!=arr[j]+1){

//                 }
//                }
//             }
//         }
//     }
   
// }