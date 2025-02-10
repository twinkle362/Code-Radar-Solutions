#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y;
    scanf("%d",&x,&y);
    if(x>y){
        printf("First");
    }
    else if(y>x){
        printf("Second");
    }
    else if(x==y){
        printf("Equal");
    }
}