// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    fgets(a, sizeof(a), stdin);
    size_t len=strlen(a);
    for(int i=0;i<len;i++){
        if(a[i]==" "){
            a[i]=" and ";
        }
        else{
            printf("you entered: %s",a);
        }
    }
    return 0;

}