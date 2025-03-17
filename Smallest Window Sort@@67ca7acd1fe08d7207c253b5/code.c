// Your code here...
void findUnsortedSubarray(int arr,int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            printf("%d"n-(i+1));
            return 0;
        }
    }
}