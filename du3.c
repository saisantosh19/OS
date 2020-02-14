
	
#include <stdio.h>
 
int main() 
{
      int at[10], bt[10], temp[10],ct[10],wt[10],tat[10];
      int i=0, smallest,j= 0, time,n;
      double end;
      float awt, atat;
      printf("\nEnter the Total Number of Processes:\t");
      scanf("%d", &n); 
      printf("\nEnter Details of %d Processes\n", n);
      for(i = 0; i <n; i++)
      {
            printf("\nEnter Arrival Time:\t");
            scanf("%d", &at[i]);
            printf("Enter Burst Time:\t");
            scanf("%d", &bt[i]); 
            temp[i] = bt[i];
      }
      bt[9] = 9999;  
      for(time = 0; j!= n; time++)
      {
            smallest = 9;
            for(i = 0;i<n; i++)
            {
                  if(at[i] <= time && bt[i] < bt[smallest] && bt[i] > 0)
                  {
                        smallest = i;
                  }
            }
            bt[smallest]--;
            if(bt[smallest] == 0)
            {
                  j++;
                  end = time + 1;
                  wt= wt+ end - at[smallest] - temp[smallest];
                  tat = tat + end - at[smallest];
            }
      }
for(i=0;i<n;i++)
{
t[i]=c[i]-a[i];
w[i]=t[i]-b[i];
}
printf("p\t at\t bt\t ct\t tat\t wt\n ");
for(i=0;i<n;i++)
{
printf("   %d   ",at[i]);
printf("   %d   ",bt[i]);
printf("   %d   ",ct[i]);
printf("   %d   ",tat[i]);
printf("   %d   ",wt[i]);
printf("\n");
}
}
      awt = wt /n; 
      atat = tat / n;
      printf("\n\nAverage Waiting Time:\t%lf\n", awt);
      printf("Average Turnaround Time:\t%lf\n", atat);
      return 0;
}
