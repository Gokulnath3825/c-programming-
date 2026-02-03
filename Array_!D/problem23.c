#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int close=arr[0];  // -2 -1
    int d1,d2;
    for(int i=0;i<n;i++){
        if(arr[i]<0){   //-1<0 -3<0 -4<0
            d1=-arr[i]; // 1 3 4
        }
        else{
            d1=arr[i];
        }
        if(close<0){ //-2<0 -1<0 -1<0
            d2=-close; // 2 1 1
        }else{
            d2=close;
        }
        if(d1<d2){ // 1<2  3<1 4<1
            close=arr[i]; // -1
        }
        else if (d1==d2 && arr[i]>close){ // 3==1 &&  -3>-1 4==1 && -4>-1
            close=arr[i];
        }
    }
    printf("%d",close);




    return 0;
}