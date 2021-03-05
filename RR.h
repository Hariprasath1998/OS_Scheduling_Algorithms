void runRR(Process *p[], int n, int timeAllot){
    int done=0;
    int elapsedTime=0,avgWait=0,avgTurnAround=0;
    while(done<n) {
        for (int i = 0; i < n; i++){
            if(p[i]->pendingProc>0){
                if (p[i]->pendingProc<=timeAllot){
                    elapsedTime+=p[i]->pendingProc;
                } else{
                    elapsedTime+=timeAllot;
                }
                p[i]->pendingProc-=timeAllot;
//                printf("\n%c has %d pending",p[i]->id,p[i]->pendingProc);
                if (p[i]->pendingProc<=0){
                    p[i]->waitTime=elapsedTime-p[i]->burstTime;
                    p[i]->turnAroundTime=elapsedTime;
                    done++;
                    printf("\nDone: %d",done);
                    printf("\nProcess %c ",p[i]->id);
                    printf("\nWaiting time: %d",p[i]->waitTime);
                    printf("\nTurn Around time: %d\n",p[i]->turnAroundTime);

                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        avgWait+=p[i]->waitTime;
        avgTurnAround+=p[i]->turnAroundTime;
    }
    avgWait/=n;
    avgTurnAround/=n;

    printf("\nAverage Waiting Time: %d",avgWait);
    printf("\nAverage Turn Around Time: %d",avgTurnAround);

}