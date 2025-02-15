// Your code here...
#include<stdio.h>
int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    size_t len=strlen(a);
    printf("Name: ")
    for(int i=0;i<len;i++){
        if(a[i]==' '){
            printf("Age: ");
            for(int j=i;j<len;j++){
                if(a[i]==' '){
                printf("Hobby: ");
                for(int k=j;k<len;k++){
                    printf("%c",a[k])
                }
                }
                else{
                printf("%d",a[i]);
                }
        else{
            printf("%c",a[i]);
            }
        }
    }
}
return 0;
}