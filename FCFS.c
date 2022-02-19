#include <stdio.h>
int main()
{
  int i,j,no,bt[30],wt[30],rt[30],at[30],tat[30];
  float awt=0,atat=0,art=0;
  printf("Enter the number of processes\n");
  scanf("%d",&no);
  printf("Enter the arrival time of each process\n");
  for(i=0;i<no;i++)
  {
    scanf("%d",&at[i]);
  }
  printf("Enter the burst time \n");
  for (i=0;i<no;i++)
  {
    scanf("%d",&bt[i]);
  }
  printf("\n\n");
  printf("______________________________________________________________________________________________________\n");
  printf("Process \tArrival time\tBurst time\t Turnaround time\tWaiting time\tResponse time \n");
  printf("------------------------------------------------------------------------------------------------------\n");
  for (i=0;i<no;i++)
  {
    rt[i]=0;
    wt[i]=0;
    tat[i]=0;
    for(j=0;j<i;j++)
    {
      wt[i]=wt[i]+bt[j];
      tat[i]=bt[i]-at[i];
      rt[i]=wt[i];
      awt=awt+wt[i];
      atat=atat +tat[i];
      art=art+rt[i];
    }
    printf("P%d \t\t%d\t\t%d\t\t %d\t\t\t%d\t\t%d\n",i+1,at[i],bt[i],tat[i],wt[i],rt[i]);
    awt=awt/no;
    atat=atat/no;
    art=art/no;
    
  }
  printf("\n\n");
  printf("Average waiting time = TAT-BT = %.3f\n",awt);
  printf("Average Responsetime =   WT   = %.3f\n",awt);
  printf("Average Turn ar.time =  CT-AT = %.3f\n",atat);


  
  return 0;
}