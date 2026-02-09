#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int n=strlen(str);
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]>='A' && str[i]<='Z'){
            count=1;
            break;
        }
    }
    if(count==1){
        printf("Valid");
    }else{
        printf("Invalid");

    }



    return 0;
}
