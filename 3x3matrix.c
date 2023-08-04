#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n],sum1=0,sum2=0,total,i,j;
    for(i=0;i<n;i++){
        for (j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for (j = 0; j < n; j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
            for(i=0;i<n;i++){
            sum1=sum1+a[i][i];
            }
            for(i=0;i<n;i++){
                for(j=n;j>=0;j--){
            sum2=sum2+a[i][j];
                }
            }
    total=sum1-sum2;
    printf("%d",abs(total));
    


    return 0;
}