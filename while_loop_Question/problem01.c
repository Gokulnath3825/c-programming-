#include<stdio.h>
int main(){
    int n,noiseLevel;
    scanf("%d",&n);
    int Violations=0;
    int Longest=0;
    int streak=0;

    int i=0;
    while(i<n){
        scanf("%d",&noiseLevel);
        if(noiseLevel>70){
            Violations++;
            Longest++;
            if(Longest>streak){
                streak=Longest;
            }
        }
        else{
            Longest=0;
        }
        i++;
    }
    printf("Noise Violations:%d\n",Violations);
    
        // printf("Longest Violation Streak: 3");
    printf("Longest Violation Streak:%d",streak);

    return 0;
}