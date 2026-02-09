#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    char str[100];
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(str[i]==str[j]){
                printf("%c",str[i]);

            }

        }
    }


    return 0;
}