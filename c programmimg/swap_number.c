#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("enter 2nd number:");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("After swapping: %d %d", a, b);
    return 0;
}