// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    char k;
    scanf("%d %d %c",&a,&b,&k);

    if (k=='+'){
        printf("%d",a + b);
    }
    else if (k=='-'){
        printf("%d",a - b);
    }
    else if  (k=='+'){
        printf("%d",a * b);
    }
    else if (k=='/'){
        printf("%d",a / b);
    }
}