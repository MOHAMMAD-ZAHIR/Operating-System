#include<stdio.h>
int main(){
    printf("..........FCFS with out arrival time..........\n\n");
    int waitingTime = 0;
    int totalWaitingTime = 0;
    int totalTurnAroundTime = 0;
    int i,process,burstTime[100],turnAroundTime;
    float avgWTime,avgTTime;
    printf("Enter the number of processes:");
    scanf("%d",&process);
    for(i=0;i<process;i++){
        printf("Enter burst time for process %d : ",i+1);
        scanf("%d",&burstTime[i]);
    }
    printf("\n\n Process \t BurstTime \t TurnAroundTime \t WaitingTime");
    for(i=0;i<process;i++){
        totalWaitingTime = totalWaitingTime + waitingTime;
        turnAroundTime = waitingTime+ burstTime[i];
        printf("\n %d \t\t %d \t\t %d \t\t\t\t %d",i+1,burstTime[i],turnAroundTime,waitingTime);
        waitingTime = waitingTime + burstTime[i];
        totalTurnAroundTime = totalTurnAroundTime + turnAroundTime;
    }
    printf("\n\n\n\n Total Waiting Time :  %d",totalWaitingTime);
    printf("\n\n Total Turn Around Time: %d \n\n",totalTurnAroundTime);
    avgWTime = totalWaitingTime/process;
    printf("\n Average Waiting Time: %f \n",avgWTime);
    avgTTime = totalTurnAroundTime/process;
    printf("\n Average Turn Around Time : %f \n",avgTTime);

    return 0;
}
