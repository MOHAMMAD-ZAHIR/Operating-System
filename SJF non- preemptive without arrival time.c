#include<stdio.h>
int main(){
    int n,p[100],i,j,bt[100],tat[100],temp;
    int wt = 0;
    int total_wt=0, total_tat=0;
    float avg_tat,avg_wt;

    printf("Enter the number of process : ");
    scanf("%d",&n);

    printf("\n\n");
    for(i=0;i<n;i++){
        printf("The processes are :");
        scanf("%d",&p[i]);
    }
    printf("\n\n");

    for(i=0;i<n;i++){
        printf("The burst time for p[%d] :",i+1);
        scanf("%d",&bt[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(bt[i]>bt[j]){
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    printf("\n\n");

    printf("Process \t Burst Time \t Turnaround Time \t Waiting Time \n");
    for(i=0;i<n;i++){
        tat[i] = wt+ bt[i];
        total_tat+=tat[i];
        total_wt+=wt;
        printf("p%d \t\t %d \t\t %d \t\t\t %d \n",p[i],bt[i],tat[i],wt);
        wt = wt + bt[i];
    }
    printf("\n");
    printf("Total Turn Around Time :%d \n\n",total_tat);
    printf("Total Waiting Time :%d ",total_wt);
    printf("\n\n");

    avg_tat = total_tat/n;
    avg_wt = total_wt/n;
    printf("Avg Turn Around Time: %f \n",avg_tat);
    printf("Avg Turn Around Time: %f",avg_wt);

    return 0;


}
