#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "processes.h"

int processescount = 0;
Process processes[5];

int nextprocessid(){
    bool found = 0;
    int potentialID;
    for(potentialID = 1; potentialID <= 5; potentialID++){
        found = 1;
        for(int j = 0; j < processescount; j++){
            if(potentialID == processes[j].ID){
                found = 0;
            }   
        }
        if (found){
            return potentialID;
        }
    }
    return 0;
}
    

int createnewprocess(char name[30]){
    int ID = nextprocessid();
    if(!ID){
        return 0;
    }
    strcpy(processes[processescount].name, name);
    processes[processescount].ID = ID;
    processescount++;
    return ID;
}

void stopprocess(int ID){
    int i;
    for(i = 0; i < processescount; i++){
        if (processes[i].ID == ID)
            break;        
    }
    
    if(i < processescount){
        for(;i < processescount; i++){
            processes[i].ID = processes[i + 1].ID;
            strcpy(processes[i].name, processes[i + 1].name);
        }
        processescount--;
    }
    
}

