// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);
    }
    int candidate=arr[0];
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i]==candidate){
            count++;
        }else{
            count--;
        }
        if(count==0){
            candidate=arr[i];
            count=1;
        }
    }
   count=0;
   for(int i=0;i<n;i++){
    if(candidate==arr[i]){
        count++;
    }
   }
   if(count>n/2){
    printf("%d",candidate);
   }else{
    printf("-1");
   }
    
    
    
}