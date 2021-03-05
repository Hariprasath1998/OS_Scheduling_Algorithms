typedef struct Process{
    char id;
    unsigned int burstTime;
    int pendingProc;
    unsigned int waitTime;
    unsigned int turnAroundTime;
}Process;

typedef struct priorityProcess {
    Process *p;
    int priority;
}priorityProcess;


Process * newProcess(char I, int BT){
    Process *temp=malloc(sizeof(Process));
    temp->id=I;
    temp->burstTime=BT;
    temp->pendingProc=BT;
    temp->waitTime=0;
    temp->turnAroundTime=0;
    return temp;
}

priorityProcess * newPriorityProcess(char I,int BT, int priority){
    priorityProcess *temp=malloc(sizeof(struct priorityProcess));
    temp->p=newProcess(I,BT);
    temp->priority=priority;
    return temp;
}

