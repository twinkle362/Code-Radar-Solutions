#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if(1<=n>=100){
        printf("Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}