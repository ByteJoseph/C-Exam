// write a program to print fibonacci series using recursion

#include <stdio.h>

int fib(int);
void main(){
    int a,n=0,i;
    printf("Enter the number of terms: ");
    scanf("%d",&a);
    for (i=0;i<=a;i++){
     printf("%d\t",fib(n));
     n++;
    }
}
int fib(int x){
    if (x==0 || x==1){
        return 1;
    }
    else{
        return fib(x-1)+fib(x-2);
    }
}