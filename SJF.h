
void swap(Process * a, Process * b)
{
    Process temp = *a;
    *a = *b;
    *b = temp;
}

void prioritySwap(priorityProcess * a, priorityProcess * b)
{
    priorityProcess temp = *a;
    *a = *b;
    *b = temp;
}

void sort(Process *p[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {

        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (p[j]->burstTime < p[min_idx]->burstTime)
                min_idx = j;

        swap(p[min_idx], p[i]);
    }
}

void runSJF(Process *p[],int n){
    int turnAround=0,totalWait=0,totalTurnAround=0;
    Queue * q = createQueue();
    sort(p,n);
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


