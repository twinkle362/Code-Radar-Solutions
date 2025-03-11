// Your code here...
#include <stdio.h>

struct Stu {
    int RoNum;
    char name[50];
    float marks;
};

int main() {
    int n;
    float check;
    int k=0;
    scanf("%d", &n);
    
    float a = 0;
    struct Stu Sts[n]; 
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &Sts[i].RoNum);
        scanf("%s", &Sts[i].name); 
        scanf("%f", &Sts[i].marks);
    }
    scanf("%f",&check);

    for (int i = 0; i < n; i++) {
        check< Sts[i].marks;
        k++;
    }

    printf("Count of students scoring above %.2f: %d", check,k);

    return 0;
}
