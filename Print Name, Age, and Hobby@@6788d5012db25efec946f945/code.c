// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    size_t len=strlen(a);
    printf("Name: ");
    for(int i=0;i<len;i++){
        if(a[i]==' '){
            printf("\nAge: ");
            for(int j=i+1;j<len;j++){
                if(a[j]==' '){
                    printf("\nHobby: ");
                    for(int k=j+1;k<len;k++){
                        printf("%c",a[k]);
                    }
                }
                else if(a[j+1]){break;}
                else{
                    printf("%d",a[j]);
                }
                break;
            }
        }
        else{
            printf("%c",a[i]);
        }
    }
    return 0;
}