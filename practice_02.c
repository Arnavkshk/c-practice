//program to find the maximum and minimum number
#include <stdio.h>
int main()
{
    int arr[10]={32,34,5,2,43,28,22,8,90,12};
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<10;i++){
        if(min>arr[i]){
            int temp=arr[i];
            arr[i]=min;
            min=temp;
        }
        if(max<arr[i]){
            int temp=arr[i];
            arr[i]=max;
            max=temp;
        }
    }
   printf("the minimum number is %d\n",min);
   printf("the minimum number is %d",max);
    return 0;
}