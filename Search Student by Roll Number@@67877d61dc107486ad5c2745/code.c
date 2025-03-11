// Your code here...
#include <stdio.h>

struct Stu {
    int RoNum;
    char name[50];
    float marks;
};

int main() {
    int n;
    int rol;
    int k=0;
    scanf("%d", &n);
    
    float a = 0;
    struct Stu Sts[n]; 
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &Sts[i].RoNum);
        scanf("%s", &Sts[i].name); 
        scanf("%f", &Sts[i].marks);
    }
    scanf("%d",&rol);

    for (int i = 0; i < n; i++) {
       if( rol == Sts[i].RoNum){
        printf("Roll Number: %d, Name: %s, Marks: %.2f",Sts[i].RoNum,Sts[i].name,Sts[i].marks);
        int k=1;
       }
    }
    if( k==0){
        printf("Student not found");
    }

    

    

    return 0;
}
