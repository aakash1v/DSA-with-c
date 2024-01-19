#include<stdio.h>

int main(){

    //change hero to Super Superr Hero
    char str[] = "Super Hero";

    for(int i=10;i>=4;i--){
        str[i+1]=str[i];
    }
    str[4];
    printf("%s",str);
    return 0;
}