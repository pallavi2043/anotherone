#include<stdio.h>
int main()
{
    int arr[2][3],sum=0, r,c;
    for(r=0;r<2;r++){puts(" row elements");
        for(c=0;c<3;c++){
            printf("enter col elements=");
            scanf("%d",&arr[r][c]);
            sum=sum+arr[r][c];
        }
    }
    for(r=0;r<2;r++){
        for(c=0;c<3;c++){
            printf("%d",arr[r][c]);
        }
        printf("\n");
    }
    printf("sum is =%d",sum);
    return 0;
}
