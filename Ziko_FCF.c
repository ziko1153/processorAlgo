#include<stdio.h>

int main()
{

    int brusttime [101],n,sum = 0,i;
    float avg = 0;
    printf("Enter number of process:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Process %d = ",i-1);
        scanf("%d",&brusttime[i]);
        printf("\n");
    }
    printf("p-0=0\t");
    for(i=1;i<n;i++)
    {
        sum=sum+brusttime[i];
        printf("p-%d=%d\t\t",i,sum);
        avg=avg+sum;
    }
    avg=avg/n;
    printf("\n\nAverage process Time is : %.2f",avg);
    return 0;
}
