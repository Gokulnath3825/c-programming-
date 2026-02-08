#include<stdio.h>
#include<string.h>
int main(){
    char str[100];

    scanf("%s",str);
    int n=strlen(str);

    int count,max=0,max1=0;
    char first,second;
    for(int i=0;i<n;i++){
        count=0;
        for(int k=0;k<n;k++){
            if(str[i]==str[k]){
                count++;
            }
        }
        if(count>max){
            max1=max;
            max=count;
            second=first;
            first=str[i];
        }else if(count<=max && count>=max1){
            max1=count;
            second=str[i];
            break;
        }
    }

    printf("%c",second);


    return 0;
}
