#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-1;j++){
            printf(" ");
        }
        for(int k=i;k<=n;k++){
            printf("*");
        }
        for(int m=1;m<i;m++){
            print("*");
        }
    }
    return 0;
}