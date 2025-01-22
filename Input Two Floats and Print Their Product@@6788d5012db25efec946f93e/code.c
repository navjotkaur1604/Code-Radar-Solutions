#include <stdio.h>
int main(){
    float a, b;
    printf("Product: ");
    scanf("%f %f" , &a, &b);
    printf("%.2f\n" , a*b);
    return 0;
}