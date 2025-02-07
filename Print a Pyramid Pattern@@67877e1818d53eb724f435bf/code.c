#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=i;k<=n;k++){
            printf("*");
        }
        for(int m=1;m<k;m++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}