// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    char k;
    scanf("%d %d",&a,&b);
    scanf("%c",&k);
    if (k=='+'){
        printf("%d %c %d",a + b);
    }
    else if (k=='-'){
        printf("%d %c %d",a - b);
    }
    else if  (k=='+'){
        printf("%d %c %d",a * b);
    }
    else if (k=='/'){
        printf("%d %c %d",a / b);
    }
}