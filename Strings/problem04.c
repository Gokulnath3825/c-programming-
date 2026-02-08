#include<stdio.h>
#include<string.h>
int main(){
    char str[100];

    scanf("%s",str);
    int n=strlen(str);

    int count;
    for(int i=0;i<n;i++){
        count=0;
        for(int k=0;k<n;k++){
            if(str[i]==str[k]){
                count++;
            }
        }
        if(count==1){
            printf("%c",str[i]);
            break;
        }
    }
    if(count>1){
        printf("%d",-1);
    }


    return 0;
}
