#include <stdio.h>
int main() {
    int x,y,z;
    int big=0;
    scanf("%d %d %d",&x,&y,&z);
    if(big<x){
        big=x;
    }
    if(big<y){
        big=y;
    }
    if(big<z){
        big=z;
    }
    printf("%d",big);
    return 0;
}