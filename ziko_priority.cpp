#include<bits/stdc++.h>
using namespace std;



int main()
{

    int brusttime [101],n,sum = 0,i,temp[101],process[10],j,t,prioritytime[101],temp2[2];
    float avg = 0;
    process[0] = 0;
    printf("Enter number of process:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Process %d = ",i);
        scanf("%d%d",&brusttime[i],&prioritytime[i]);
        temp[i] = prioritytime[i];



        printf("\n");
    }

for(i=0;i<n;i++)
{
   for(j= i+1;j<n;j++)
   {
       if(prioritytime[j]<prioritytime[i])
        {

        t = prioritytime[i];
        prioritytime[i] = prioritytime[j];
        prioritytime[j] = t;


       }


   }
}

    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(prioritytime[i]==temp[j])
            {
                if(sum==0)
                {
                    printf("Process %d = Waiting 0 \n",j);
                    sum = sum+brusttime[j];

                }
                else{

                 avg = avg + sum;
               printf("Process %d =  Waiting %d \n",j,sum);
               sum = sum+brusttime[j];


                }

            }
        }
    }

printf("Average = %f",avg/n);

}

