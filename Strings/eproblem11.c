#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    fgets(str,sizeof(str),stdin);
    int digit=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='0' && str[i]<='9'){
            digit++;
        }
    }
    printf("%d",digit);
}