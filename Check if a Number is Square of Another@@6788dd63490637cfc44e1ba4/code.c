#include <stdio.h>
#include<math.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(x==y*y){
        printf("Yes");
    }
    else{
        printf("No");
    }

}