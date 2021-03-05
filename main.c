#include <stdio.h>
#include "FCFS.h"
#include "SJF.h"
#include "RR.h"
#include "priorityScheduling.h"
int main()
{
//    Process *p[3];
    priorityProcess *p[10];
//    p[0]=newProcess('A',10);
//    p[1]=newProcess('B',5);
//    p[2]=newProcess('C',8);
//    p[3]=newProcess('D',1);
//    p[4]=newProcess('E',2);
//    p[5]=newProcess('F',3);
//    p[6]=newProcess('G',8);
//    p[7]=newProcess('H',2);
//    p[8]=newProcess('I',9);
//    p[9]=newProcess('J',7);

    p[0]=newPriorityProcess('A',10,0);
    p[1]=newPriorityProcess('B',5,9);
    p[3]=newPriorityProcess('D',1,3);
    p[2]=newPriorityProcess('C',8,4);
    p[4]=newPriorityProcess('E',2,2);
    p[5]=newPriorityProcess('F',3,4);
    p[6]=newPriorityProcess('G',8,6);
    p[7]=newPriorityProcess('H',2,8);
    p[8]=newPriorityProcess('I',9,1);
    p[9]=newPriorityProcess('J',7,3);
    int n=sizeof(p)/sizeof(p[0]);
//    printf("%d",n);
//    runFCFS(p,n);
//    runSJF(p,n);
//    runRR(p,n,2);
    runPriorityScheduling(p,n);
}

