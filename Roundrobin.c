 #include<stdio.h>

int main()
{
    // maximum size for array [20]

    // 	int n,i,qt,count,temp,ct,bt[20],wt[20],tat[20],rem_bt[20];
    // 	float awt=0,atat=0;
    int n,i,qt,bt[20],rem_bt[20],count,at[20],ct=0,temp=0;
    float atat=0,awt=0;
    printf("Enter the Number of Process(max 20) : \n");
    scanf("%d",&n); // n is the number of Process
    count=n;

    printf("Enter Arrival Time\n");
    for(i=0;i<n;i++){
        printf("For P[%d]: ",i+1);
        scanf("%d",&at[i]);
    }

    printf("\nEnter Burst Time\n");
    for(i=0;i<n;i++){
        printf("For P[%d]: ",i+1);
        scanf("%d",&bt[i]);
        rem_bt[i]=bt[i]; // initially assume remain time for any process is equal to it's burst time !
    }

    printf("\nEnter Time Quantum :\n");
    scanf("%d",&qt);

    printf("\n");

    for(i=0;count!=0;){
        /*
            * this below condition check the remain time for any process is less than or equal with the time quantum
            * or not and also check the remain time is greater than 0 or not. if both condition are true that means
            * the process can execute fully at one time.
        */
        if(rem_bt[i]<=qt && rem_bt[i]>0){
            ct+=rem_bt[i];
            rem_bt[i]=0;
            temp=1;
        }

        else if(rem_bt[i]>0){
            rem_bt[i]-=qt;
            ct+=qt;
        }

        if(temp==1 && rem_bt[i]==0)
        {
            printf("P[%d] | waiting Time : %d\n",i+1,ct-at[i]-bt[i]);
            awt+=ct-at[i]-bt[i];
            atat+=ct-at[i];
            temp=0;
            count--;
        }

        if(i==n-1)
            i=0;
        else if(at[i+1]<=ct){
            i++;
        }
        else
            i=0;
    }

    awt=(float)awt/n;
    atat=(float)atat/n;
    printf("\nThe Average Waiting Time : %.2f",awt);
    printf("\nThe Average Turnaround Time : %.2f \n\n",atat);
}