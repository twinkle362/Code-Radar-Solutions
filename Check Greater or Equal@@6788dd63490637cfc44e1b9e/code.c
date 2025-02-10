#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y;
    scanf("%d %d",&x ,&y);
    if(x>y){
        printf("Yes");
    }
    else if(y==x){
        printf("Zero");
    }
    else{printf("No")}
    return 0;
}