#ifndef PROCESSES_H_
#define PROCESSES_H_

typedef struct Process_struct{
    int ID;
    char name[30];
}Process;

Process processes[5];
extern int processescount;

int createnewprocess(char name[30]);

void stopprocess(int ID);

#endif