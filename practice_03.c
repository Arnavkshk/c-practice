#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int day=2,ppower,opower;
    scanf("%d%d",&ppower,&opower);
    int temp=ppower;
    int arr[opower];
    for(int i=0;i<opower;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<opower;i++){
        if(ppower>arr[i]){
            ppower=ppower-arr[i];
        }
        else if(ppower<=arr[i]){
            day++;
            ppower=temp;
        }
        else{
            printf("-1");
        }
        
    }
    printf("%d",day);  
    return 0;
}