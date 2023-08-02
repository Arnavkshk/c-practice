#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a[3][3],sum1,sum2,total,i,j;
    for(i=0;i<3;i++){
        for (j = 0; j < 3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for (j = 0; j < 3; j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for (j = 0; j < 3; j++){
            sum1=a[1][1]+a[2][2]+a[3][3];
            sum2=a[1][3]+a[2][2]+a[3][1];
        }
        
    }
    total=sum1-sum2;
    abs(total);
    printf("%d",sum1);
    printf("%d",sum2);


    return 0;
}