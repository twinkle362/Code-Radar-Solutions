#include <stdio.h>
int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if (a == b && b == c){
        printf("Equilateral");
    }
    else if (a == b || b == c || a == c){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}