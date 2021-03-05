#include <stdio.h>
#include "FCFS.h"
#include "SJF.h"
#include "RR.h"
#include "priorityScheduling.h"

void processInput(choice){
    int bt;
    char id;
    int n,timeQuantum;

    printf("\nEnter the number of processes");
    scanf("%d",&n);
    Process *p[n];
    for(int i=0;i<n;i++){
        printf("\nEnter Burst Time:");
        scanf("%d",&bt);
        p[i]=newProcess(65+i,bt);
    }
    if (choice==1){
        runFCFS(p,n);
    }
    if (choice==2){
        runSJF(p,n);
    }
    if (choice==3){
        printf("\nEnter the time quantum: ");
        scanf("%d",&timeQuantum);
        runRR(p,n,timeQuantum);
    }
}
void priorityInput(){
    int bt,priority;
    char id;
    int n;

    printf("\nEnter the number of processes");
    scanf("%d",&n);
    priorityProcess  *p[n];
    for(int i=0;i<n;i++){
        printf("\nEnter Burst Time:");
        scanf("%d",&bt);
        printf("\nEnter Priority:");
        scanf("%d",&priority);
        p[i]=newPriorityProcess(65+i,bt,priority);
    }
    runPriorityScheduling(p,n);
}
int main(){
    int choice;
    printf("\nChoose the scheduling algorithm");
    printf("\n1) First come first serve");
    printf("\n2) Shortest Job First");
    printf("\n3) Round Robin");
    printf("\n4) Priority Scheduling");
    printf("\nEnter 0 to exit");
    scanf("%d",&choice);
    if(choice<0 || choice>4){
        printf("\nChoose a proper response!");
    }else{
        switch (choice) {
            case 0:
                break;
            case 1:
                processInput(choice);
                break;
            case 2:
                processInput(choice);
                break;
            case 3:
                processInput(choice);
                break;
            case 4:
                priorityInput();
                break;

        }
    }
}


