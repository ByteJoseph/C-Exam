// factorial of a number using recursion

#include <stdio.h>
int fact(int);
int main(){
    int n,f;
    printf("Enter the number: ");
    scanf("%d",&n);
    f = fact(n);
    printf("factorial = %d",f);
    return 0;
}
int fact(int b){
    if (b==1){
        return 1;
    }
    else{
        return b*fact(b-1);
    }
}