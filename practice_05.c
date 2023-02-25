//linear search
#include <stdio.h>
int main()
{
    int n, num;
    printf("enter the number of elements to be entered in an array ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the number to be searched in the array ");
    scanf("%d",&num);
    for(int i=0;i<n;i++){
        if(num==arr[i]){
            printf("%d element found at %d index ",num,i);
        }
    }
    return 0;
}