#include <stdio.h>

#define SIZE 10
#define PRODUCT(X,Y) ((X)*(Y))
int main(){
    int arr[SIZE];
    int i;
    for (i=0;i<SIZE;i++)
    arr[i] = i*2;
    for (i=0;i<SIZE;i++)
    printf("%d ",arr[i]);
    int a=2,b=3;
    printf("\n%d",PRODUCT(a,b));
    return 0;
}