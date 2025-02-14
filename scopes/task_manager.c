#include <stdio.h>

//#include "processes.h"

#ifndef PROCESSES_H_
#define PROCESSES_H_

typedef struct Process_struct{
    int ID;
    char name[30];
}Process;

extern Process processes[5];
extern int processescount;

int createnewprocess(char name[30]);

void stopprocess(int ID);

#endif

void print_working_processes(){
    for(int i = 0; i < processescount; i++){
        printf("%s, ID - %d\n", processes[i].name, processes[i].ID);
    }
}

int main(){
    int option = 0;
    while (1){
        printf("choose an option:\n1.create process\n2.list processes\n3.stop process\n4.\n");
        scanf("%d", &option);

        switch(option){
            case 1:
                {
                    char name[30];
                    int ID;
                    printf("enter name of new process: ");
                    scanf("%s", name);
                    ID = createnewprocess(name);
                    if(!ID)
                        printf("max number of working processes reached. stop one to create this one\n");
                    else
                        printf("process created. ID - %d\n", ID);
                }
                break;
            case 2:
                print_working_processes();
                break;
            case 3:
                { 
                    int ID;
                    printf("enter ID of a process to stop: ");
                    scanf("%d", &ID);
                    stopprocess(ID);
                }
                break;
            case 4: return 0;
            default: break;
        }
    }
}