#include<bits/stdc++.h>
using namespace std;



int main()
{

    int brusttime [101],n,sum = 0,i,temp[101],process[10],j,t;
    float avg = 0;
    printf("Enter number of process:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Process %d = ",i);
        scanf("%d",&brusttime[i]);
        temp[i] = brusttime[i];

        printf("\n");
    }

for(i=0;i<n;i++)
{
   for(j= i+1;j<n;j++)
   {
       if(brusttime[j]<brusttime[i])
        {

        t = brusttime[i];
        brusttime[i] = brusttime[j];
        brusttime[j] = t;
       }


   }
}

    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(brusttime[i]==temp[j])
            {
                process[i] = j;
            }
        }
    }
    for(i = 0;i<n;i++)
    {
        printf("Process %d = brustime %d \n",process[i],brusttime[i]);
    }


    printf("\np-%d=0\t",process[0]);
    for(i=1;i<n;i++)
    {
        sum=sum+brusttime[i-1];
        printf("p-%d=%d\t\t",process[i],sum);
        avg=avg+sum;
    }
    avg=avg/n;
    printf("\n\nAverage process Time is : %.2f",avg);
    return 0;
}
