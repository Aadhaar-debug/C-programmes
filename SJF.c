#include<stdio.h>
 int main()
{
    int bt[20],p[20],at[20],rt[20],wt[20],tat[20],i,j,n,total=0,pos,temp;
    float avg_rt,avg_wt,avg_tat;
    printf("Enter number of process\n");
    scanf("%d",&n);
    printf("\nEnter Arrival Time of each process in order\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&at[i]);
        p[i]=i+1;         
    }
    printf("\nEnter Burst Time of each process in order\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;         
    }
   //sorting of burst times
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
    wt[0]=0;
    rt[0]=0;           
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
        total+=wt[i];
    }
    avg_wt=(float)total/n; 
    avg_rt=(float)total/n;     
    total=0;
    printf("_____________________________________________________________________________________________________\n");
    printf("Process\t    Arrival Time    \tBurst Time    \tTurn around Time  \tWaiting Time \tResponse Time");
    for(i=0;i<n;i++)
    {
        at[i]=p[i];
        rt[i]=wt[i];
        tat[i]=bt[i]+wt[i];   
        total+=tat[i];
        printf("\np%d\t\t%d \t\t  %d\t\t    %d\t\t\t%d\t\t%d",p[i],at[i],bt[i],tat[i],wt[i],rt[i]);
    }
    printf("\n----------------------------------------------------------------------------------------------------\n");
    avg_tat=(float)total/n;    
    printf("\n\nAverage Waiting Time= %.3f",avg_wt);
    printf("\nAverage Response Time= %.3f",avg_rt);
    printf("\nAverage Turnaround Time= %.3f",avg_tat);
}