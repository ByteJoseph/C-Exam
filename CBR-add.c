// write a program to add 2 numbers using call by reference

#include <stdio.h>
int add(int*,int *);
int main(){
    int a,b,sum;
    printf("Enter the numbers:\n");
    scanf("%d%d",&a,&b);
    sum = add(&a,&b);
    printf("sum = %d",sum);
    return 0;
}
int add(int *n1,int *n2){
    return *n1+*n2;
}