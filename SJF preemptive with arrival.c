#include <stdio.h>
int main()
{
 int at[10], bt[10], temp[10];
 int i, smallest, count = 0, time, n;
 double wt = 0, turnaround_time = 0, end;
 float awt, tt_time;

 printf("\nEnter the Total Number of Processes:\t");
 scanf("%d", &n);

 printf("\nEnter Details of %d Processes", n);

 for(i = 0; i < n; i++)
 {
 printf("\nEnter Arrival Time:\t");
 scanf("%d", &at[i]);
 printf("Enter Burst Time:\t");
 scanf("%d", &bt[i]);
 temp[i] = bt[i];
 }

 bt[9] = 1000;
 for(time = 0; count != n; time++)
 {
 smallest = 9;
 for(i = 0; i < n; i++)
 {
 if(at[i] <= time && bt[i] < bt[smallest] && bt[i] > 0)
 {
 smallest = i;
 }
 }
 bt[smallest]--;
 if(bt[smallest] == 0)
 {
 count++;
 end = time + 1;
 wt= wt + end - at[smallest] - temp[smallest];
 turnaround_time = turnaround_time + end - at[smallest];
 }
 }
 awt = wt / n;
 tt_time = turnaround_time-wt ;
 printf("\n\nAverage Waiting Time:\t%lf\n", awt);
 printf("Turnaround Time:\t%lf\n", tt_time);
 return 0;
}
