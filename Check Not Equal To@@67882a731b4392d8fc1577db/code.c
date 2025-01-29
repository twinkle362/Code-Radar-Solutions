#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(x!=y){
        printf("False");
    }
    else{
        printf("True");
    }
    return 0;
}