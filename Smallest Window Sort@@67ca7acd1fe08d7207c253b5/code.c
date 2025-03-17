// Your code here...
int findUnsortedSubarray(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            return n-(i+1);
            return 0;
        }
    }
}