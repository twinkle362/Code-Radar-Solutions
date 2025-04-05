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
        printf("%d ",arr[i]);

    }
    printf("\n");
    int allNeg=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            start=i;
            allNeg=1;
            break;
        }
    }
    if(allNeg){
        printf("1");
    }

    int missing=arr[n-1]+1;

    for(int i=start;i<n-1;i++){
        if(arr[i+1]!=arr[i]+1){
            missing=arr[i]+1;
        }
    }
    printf("%d",missing);
    

}
