#include <stdio.h>

#define COMMAND(NAME, TYPE) NAME ## _ ## TYPE ## _command

#define DEFINE_COMMAND(NAME, TYPE)\
void COMMAND(NAME, TYPE)(char* string){printf("%s\n", string);}

DEFINE_COMMAND(quit, external)
DEFINE_COMMAND(quit2, external)

int main(){
    quit_external_command("external quit");
    quit2_external_command("external quit2");
    return 0;
}