#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if(n%2==0){
        printf("Even");
            }
    else{
        printf("Odd")
    }
    return 0;
}