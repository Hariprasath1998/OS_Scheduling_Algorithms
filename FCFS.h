#include "Queue.h"

void runFCFS(Process *p[],int n){
    int turnAround=0,totalWait=0,totalTurnAround=0;
    Queue * q = createQueue();

    for (int i=0;i<n;i++){
        enQueue(q,p[i]);
    }

    while (q->front){
        Process * current=q->front->process;
        current->waitTime+=turnAround;
        current->turnAroundTime=current->burstTime+current->waitTime;
        printf("\nProcess %c",current->id);
        printf("\nBurst Time: %d",current->burstTime);
        printf("\nWaiting Time: %d",current->waitTime);
        printf("\nTurn Around Time: %d\n",current->turnAroundTime);
        turnAround=current->turnAroundTime;
        totalWait+=current->waitTime;
        totalTurnAround+=current->turnAroundTime;
        deQueue(q);
    }

    totalWait/=n;
    totalTurnAround/=n;

    printf("\nAverage Waiting Time: %d",totalWait);
    printf("\nAverage Turn Around Time: %d",totalTurnAround);
}
