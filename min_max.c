#include <stdio.h>
int main()
{

    int arr[5],temp,min=0,max=0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++){
    for (int j = i+1; j < 5; j++){
        if (arr[i]>arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
            }
        } 
    }
    for (int i = 0; i < 4; i++)
    {
        min=min+arr[i];
    }
    printf("%d ",min);
    for (int i = 5; i!=0 ; i--)
    {
        max=max+arr[i];
    }
    printf("%d",max);
    
    
    return 0;
}