main()
{
    int i,j,brt[101],n,qt,total=0,wt[101],pro[101],sum = 0,start[101],end[101];

    float avg  = 0;
    start[0]= 0;
    end[0]= 0;
    scanf("%d%d",&n,&qt);
    for(i=0;i<n;i++)
    {
        printf("process-%d ",i);
        scanf("%d",&brt[i]);
        sum = sum +brt[i];
        pro[i]=0;
        wt[i]=0;
    }
    while(total!=sum)
    {
        for(i=0;i<n;i++)
        {
            if(brt[i]==0)
                continue;
            else if(brt[i]<qt)
            {  start[i] = total;
                end[i] = total+brt[i];
                pro[i]= pro[i]+(start[i]-wt[i]);
                wt[i]=end[i];
               total = total+brt[i];
                brt[i] = brt[i]-brt[i];
                //printf("Process %d--s--%d--E--%d\n",i,start[i],end[i]);
//printf("Process %d--waiting %d\n",i,pro[i]);
            }
            else
            {   start[i] = total;
                end[i] = total+qt;
                pro[i]= pro[i]+(start[i]-wt[i]);
                wt[i]=end[i];
                total = total + qt;
                brt[i] = brt[i] - qt;
                //printf("Process %d--waiting %d\n",i,pro[i]);
                 //printf("Process %d--s--%d--E--%d\n",i,start[i],end[i]);


            }

        }
    }

    for(i=0;i<n;i++)
    {
        printf("Process--%d--Waiting Time %d\n",i,pro[i]);
        avg = avg +pro[i];
    }
    printf("Average %.2f",avg/n);
}
