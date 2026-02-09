#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    scanf("%s",str);
    int n=strlen(str);
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' &&
            str[i]!='A' &&str[i]!='E' && str[i]!='I' && str[i]!='a' && str[i]!='U' ){
                count++;
            }
    }
    printf("%d",count);







    return 0;
}