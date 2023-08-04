#include <stdio.h>

int main() {
    float m,n,p;
    scanf("%f%f%f", &m,&n,&p);
    if(m>n){
        if(m>p){
            printf("%f",m);
        }
    }
    else if(n>p){
        if(n>m){
            printf("%f",n);
            }
        }
    else{   
        printf("%f",p);
    }
    return 0;
}
