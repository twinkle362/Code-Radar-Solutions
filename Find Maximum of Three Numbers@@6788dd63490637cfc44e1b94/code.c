#include <stdio.h>
int main() {
    int x,y,z;
    int big=x;
    scanf("%d %d %d",&x,&y,&z);
    if(big<y){
        big=y;
        printf("k");
    }
    if(big<z){
        big=z;
        printf("l");
    }
    printf("%d",big);
    return 0;
}