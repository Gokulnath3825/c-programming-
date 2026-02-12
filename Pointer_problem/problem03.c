#include<stdio.h>
int vowel(char *n){
    return (*n=='a' || *n=='e' || *n=='i' || *n=='o' ||*n=='u'||
            *n=='A' || *n=='E'|| *n=='I' || *n=='O' ||*n=='U');
}
int main(){
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    char *p=ch;
    int count=0;
    while(*p!='\0'){
        if(vowel(p)){
            count++;
        }
        p++;
    }
    printf("%d",count);
}