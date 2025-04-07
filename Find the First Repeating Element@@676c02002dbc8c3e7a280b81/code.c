// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int count=1;
//     int max=0;
//     int max_count=1;
//     for(int i=0;i<n;i++){
//         count=1;
//        for(int j=i+1;j<n;j++){
//        if(arr[i]==arr[j]){
//         count=count+1;
//        }
//     }if(count>max_count){
//         max_count=count;
//         max=arr[i];
//     }

//     }if(max_count==1){
//         printf("-1");
//     }else{
//     printf("%d",max);}

//     return 0;
// }
#include<stdio.h>
void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        // Loop for each element
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if current element is greater than next
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(int i=1;i<n;i++){
        if(arr[i-1]==arr[i]){
            printf("%d",arr[i-1]);
            return ;
        }
        // else{
        //     printf("%d",-1);
        //     break;
        // }
    }
    printf("%d",-1);
        return;

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