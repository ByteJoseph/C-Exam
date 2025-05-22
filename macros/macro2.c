#include <stdio.h>

#define PRINT_VAR(X)\ 
    printf(#X" Value is %d at address %p",X,&X);
#define SWAP(A,B) A^=B^=A^=B
int main(){
    int a =3,b=8;
    PRINT_VAR(a);
    SWAP(a,b);
    printf("\n %d %d",a,b);
    return 0;
}