
void prioritySort(priorityProcess *p[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {

        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (p[j]->priority > p[min_idx]->priority)
                min_idx = j;

        prioritySwap(p[min_idx], p[i]);
    }
}



void runPriorityScheduling(priorityProcess *p[],int n){
    prioritySort(p,n);
    Process *process[n];
    for(int i=0;i<n;i++){
        process[i]=p[i]->p;
    }
    runFCFS(process,n);
}