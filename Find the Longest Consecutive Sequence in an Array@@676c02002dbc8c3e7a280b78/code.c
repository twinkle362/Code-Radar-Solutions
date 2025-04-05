// // Your code here...
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int length[n];
//     int count=0;
//     for(int i=0;i<n;i++){
//        if(arr[i]==1){
//         count++;
//        }
//        else if(arr[i]==arr[i+1]){
//         count++;
//         break;
//        }
//        else if(arr[i]==2){
//         count++;
//        }
//        else if(arr[i]==3){
//         count++;
//        }
//        else if(arr[i]==4){
//         count++;
//        }
//        else if(arr[i]==5){
//         count++;
//        }
//        else if(arr[i]==6){
//         count++;
//        }
//        else if(arr[i]==7){
//         count++;
//        }
//        else if(arr[i]==8){
//         count++;
//        }
//        else if(arr[i]==9){
//         count++;
//        }
//        else if(arr[i]==0){
//         count++;
//        }
//        else if(arr[i]==-1){
//         count++;
//        }
//        else if(arr[i]==10){
//         count++;
//        }
//        else if(arr[i]==11){
//         count++;
//        }
//        else if(arr[i]==12){
//         count++;
//        }
//        else if(arr[i]==13){
//         count++;
//        }
//        else if(arr[i]==14){
//         count++;
//        }
//        else if(arr[i]==15){
//         count++;
//        }
//     }
//     printf("%d",count);

// }
#include<stdio.h>
void bubbleSort(int arr[], int n) {
    int ans=1;
    int ans2=0;
    for (int i = 0; i < n - 1; i++) {
        
        // Flag to check if any swapping happened
    

        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the current element is greater than the next
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(int i=1;i<n;i++){
       if( arr[i-1]==arr[i]-1){
            ans+=1;
        }
       else if(ans>ans2){
            ans2=ans;
            ans=0;
        }
    }
    printf("%d",ans2);

}
int main(){
    int n;
    int max=-1000;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n);

}