#include<stdio.h>
int main()
{
    printf("FCFS in c \n");
    int p[100]={0},at[100]={0},bt[100]={0},tat[100]={0},wt[100]={0},ct[100]={0};
    int n,i,j,temp,sum=0;
    float total_tat=0,total_wt=0;

    printf("Enter array size : ");
    scanf("%d",&n);
    printf("Enter process sequence : ");
    for(i=0;i<n;i++)
        {
            scanf("%d",&p[i]);
        }
    printf("Enter burst time : ");
    for(i=0;i<n;i++)
        {
            scanf("%d",&bt[i]);
        }
    printf("Enter arrival time : ");
    for(i=0;i<n;i++)
        {
            scanf("%d",&at[i]);
        }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(at[i]>at[j]){
                temp = at[i];
                at[i] = at[j];
                at[j] = temp;

                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    for(i=0;i<n;i++){
        sum = sum + bt[i];
        ct[i]+= sum;

    }
    for(i=0;i<n;i++){
        tat[i] = ct[i] - at[i];
        total_tat += tat[i];
        wt[i] = tat[i] - bt[i];
        total_wt += wt[i];

    }
    printf("solution: \n");
    printf("Process\t AT\t BT\t CT\t TAT\t WT\t\n");
    for(i=0;i<n;i++){
        printf("p%d\t %d\t %d\t %d\t %d\t %d\t\n",p[i],at[i],bt[i],ct[i],tat[i],wt[i]);
    }
    printf("\n\n Average turnaround time :%f",total_tat/n);
    printf("\n\n Average waiting time :%f",total_wt/n);

    return 0;

}
