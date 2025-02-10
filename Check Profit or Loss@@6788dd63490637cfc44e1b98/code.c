#include <stdio.h>
int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(y-x>1){
        printf("Profit");
    }
    else{
        printf("Loss");
    }
    return 0;
}