#include <stdio.h>
int isprime(num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return 1;
        }
        else{
            return 0;
            break;
        }
    }
}