// // Your code here...
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int max=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//         if(arr[i]*arr[j]>max){
//             max=arr[i]*arr[j];
//         }
//         }
//     }
//     printf("%d",abs(max));
    
    
   
// }
#include<stdio.h>
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    // Traverse through all array elements
    for (i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("%d",arr[n-2]*arr[n-1]);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
}