// // Your code here...
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int count[n];
//     for(int i=0;i<n;i++){
//        count[i]=0;
//     }
    
//     for(int i=0;i<n;i++){
        
       
//         if(count[i]==1){
//             continue;
//         }
//         int frequency=1;
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 frequency+=1;
//                 count[j]=1;
//             }
            
           
//         } printf("%d %d\n",arr[i],frequency);
//     }
    
// }


#include<stdio.h>
int main(){
    int n;
    int arr2[1000]={0};
    
    scanf("%d",&n);
    int arr[n];
    int printed[1000]={0}
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<1000;i++){
        arr2[arr[i]]+=1;
    }
    for(int i=0;i<n;i++){
       if (!printed[arr[i]]) {
            printf("%d %d\n", arr[i], arr2[arr[i]]);
            printed[arr[i]] = 1;
    }
    return 0;
}
}