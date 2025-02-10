#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    printf("%d", & n);
    for(int i=1;i<=n;i++){
        int k=1;
        for(int j=1;j<=n;j++){
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}