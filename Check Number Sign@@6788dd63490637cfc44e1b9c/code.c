#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if(n<0){
        printf("Negative");
    }
    else if(n==0){
        printf("Zero");
    }
    else{
        printf("Positive");
    }
    return 0;
}