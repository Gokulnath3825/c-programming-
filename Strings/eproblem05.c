#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int n=strlen(str);
    int count=0;
    for(int i=n;i>=0;i--){
        for(int j=0;j<n;j++){
            if(str[i]==str[j]){
                count=1;
            }
        }
    }
    if(count==1){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
        
    }
    
    return 0;
}
