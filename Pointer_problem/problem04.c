#include<stdio.h>
int main(){
    char str1[100];
    fgets(str1,sizeof(str1),stdin);
    char str2[100];
    char *p=str1;
    int i=0;
    while(*p!='\n'){
        str2[i]=*p;
        i++;
        p++;
    }
    printf("%s",str2);
}