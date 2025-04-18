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

int missingPositive(int n,int arr[]){
    int start,allNeg=1;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            if(arr[i]!=1)
                return 1;
            else{
            start=i;
            allNeg=0;
            break;
            }
        }
    }
    if(allNeg)
        return 1;

    int missing=arr[n-1]+1;

    for(int i=start;i<n-1;i++){
        if(arr[i+1]!=arr[i]+1){
            missing=arr[i]+1;
            return missing;
        }
    }
    return missing;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n);

    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);

    // }
    // printf("\n");
    
    printf("%d",missingPositive(n,arr));

}
