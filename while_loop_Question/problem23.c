#include<stdio.h>
int main(){
    int n,vibLevel;
    scanf("%d",&n);
    int count=0,position=0,count1=0;
    
    int i=0;
    while(i<n){
        scanf("%d",&vibLevel);
        
        if(vibLevel>70){
            count++;//5

        }
        else{
            position=i;//4
            count1++;//5
        }
        i++;
    }
    if(count1>=n){//5>=5
        printf("Breakdown At Reading:Not Occured\n");
    }else{
        printf("Breakdown At Reading:%d\n",position);
    }
    printf("Unsafe Readings:%d",count);
}