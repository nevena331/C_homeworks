#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_status(char lights){
    char arr[8];
    int iarr = 0;
    for(int ilights = 0; ilights < 8; ilights++){
        if((lights >> ilights) % 2 == 1){
            arr[iarr] = ilights + 1;
            iarr++;
        }
    }
    printf("The lights is on in rooms: ");
    for(int i = 0; i < iarr; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

unsigned char switch_light(unsigned char lights){
    unsigned char light1 = 1 << 0; //0000 0001
    unsigned char light2 = 1 << 1; //0000 0010
    unsigned char light3 = 1 << 2; //0000 0100
    unsigned char light4 = 1 << 3; //0000 1000
    unsigned char light5 = 1 << 4; //0001 0000
    unsigned char light6 = 1 << 5; //0010 0000
    unsigned char light7 = 1 << 6; //0100 0000
    unsigned char light8 = 1 << 7; //1000 0000
    
    int a;
    printf("switch light number: ");
    scanf("%d", &a);
    switch(a){
        case 1: lights = lights ^ light1; break;
        case 2: lights = lights ^ light2; break;
        case 3: lights = lights ^ light3; break;
        case 4: lights = lights ^ light4; break;
        case 5: lights = lights ^ light5; break;
        case 6: lights = lights ^ light6; break;
        case 7: lights = lights ^ light7; break;
        case 8: lights = lights ^ light8; break;
        default: printf("invlaid light number\n");break;
    }

    return lights;
}

int main(){
    unsigned char lights = 0; //0000 0000
    char option[100]; 
    do{
        printf("choose an option (printStatus, switchLight or end):\n");
        scanf("%s", option);
        if(!strcmp(option, "printStatus")){
            print_status(lights);
        }else if (!strcmp(option, "switchLight")){
            lights = switch_light(lights);
        }else if(strcmp(option, "end")){
            printf("invalid option chosen\n");
        }

    }while(strcmp(option, "end"));
    return 0;
}