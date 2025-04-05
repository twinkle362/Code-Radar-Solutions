// // Your code here...
// #include <stdio.h>

// // Function to reverse a part of the array
// void reverse(int arr[], int start, int end) {
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }

// // Function to rotate the array to the right by K positions
// void rotateRight(int arr[], int n, int k) {
//     k = k % n; // Handle cases where k >= n
//     if (k == 0) return; // No rotation needed

//     // Step 1: Reverse the entire array
//     reverse(arr, 0, n - 1);
//     // Step 2: Reverse the first k elements
//     reverse(arr, 0, k - 1);
//     // Step 3: Reverse the remaining n-k elements
//     reverse(arr, k, n - 1);
// }

// int main() {
//     int n, k;
//     scanf("%d", &n);

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     scanf("%d", &k);

//     rotateRight(arr, n, k);

//     // Print the rotated array
//     for (int i = 0; i < n; i++) {
//         printf("%d \n", arr[i]);
//     }

//     return 0;
// }
#include<stdio.h>
void rotate(int n,int arr[n],int k){
    int tem;
    while(k>=1){
    for(int i=1;i<n;i++){
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
    int k;
    scanf("%d",&k);
    rotate(n,arr,k);
}
