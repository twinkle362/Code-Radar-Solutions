#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(0<y&&0<x){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}