#include<stdio.h>
#include<string.h>
int main(){
    char str[15];
    puts("ENter a string :");
    scanf("%[^\n]s",str);
    // gets(str);
    

    int size =0;
    int k =0;
    while(str[k] !='\0'){
        size++;
        k++;
    }
    
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp = str[i];
        str[i]  =str[j];
        str[j]  =temp;
    }
    printf("%d",size);
    puts("The revers is : "); //automatically  \n bhi  de deta hai
    //reversing...
    puts(str);
    puts("");
    return 0;
}