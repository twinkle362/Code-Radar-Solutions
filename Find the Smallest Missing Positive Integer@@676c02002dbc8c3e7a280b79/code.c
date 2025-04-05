#include<stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){
    int n;
    int start;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n);
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            start=i;
            break;
        }
        else{
            printf("%d",1);
        }
    }
    for(int j=start+1;j<n;j++){
        if(arr[j-1]!=arr[j]){
            printf("%d",arr[j-1]+1);
            break;
        }
    }

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