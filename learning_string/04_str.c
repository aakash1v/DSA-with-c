#include<stdio.h>

int main(){
    char *s1 = "Collgate";
    s1 = "Nothing ";
    printf("%s",s1);

    char str[20];
    printf("Enter your string ;");
    scanf("%[^\n]s",str);
    printf("%s",str);
}