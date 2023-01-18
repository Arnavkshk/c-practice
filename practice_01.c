// to reverse an array
#include <stdio.h>
#define n 5
int main()
{
    int arr[n]={3,4,8,28,22};
    int temp;
    for (int i = 0; i < n/2; i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}