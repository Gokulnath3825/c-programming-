#include<stdio.h>
int main(){\
    int mc,n,p;
    scanf("%d %d",&mc,&n);
    int sum=0;
    int treatment=0,rejected=0;
    while(n--){//4
        scanf("%d",&p);
        sum+=p;//10+20+30
        if(mc>=sum){//50>=60. 50  F
            treatment=sum;//30 F
        }
        else{
            treatment=mc;//50
            

        }
    }
    printf("Treated Patients:%d\n",treatment);
    rejected=sum-mc;
    if(rejected<0){
        printf("Rejected Patients:0");
    }else{
        printf("Rejected Patients:%d",rejected);
    }
    return 0;
}