#include<stdio.h>
#include<string.h>
// Comparing
int main(){
    char s1[100];
    scanf("%s",s1);
    int n=strlen(s1);
    int max=0;
    int min=12345;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(s1[i]==s1[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
        }else if(count<min){
            min=count;
        }

    }
    int Diff = max-min;
    printf("%d",Diff);





}