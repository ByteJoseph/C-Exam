// write a program to display the contents of a file

#include <stdio.h>

void main(){
    FILE *fp;
    char ch;
    fp = fopen("display.c","r");
    printf("%d",*fp);
    while(feof(fp)==0){
        ch = fgetc(fp);
        putchar(ch);
    }
    fclose(fp);
}