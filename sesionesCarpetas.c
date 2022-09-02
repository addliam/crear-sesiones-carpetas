#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int sesions_number;
    int comparation;
    int comparation2;
    int exit_program;
    char curse_name[256];
    char session_folder_name[256];
    // char *command;
    char custom_cmd_buffer[300];
    exit_program = 0;
    int ref;

    printf("------------ UCV TOOLS ------------\n");
    printf("-- Creacion de carpetas masivas. --\n");
    printf("-----------------------------------\n");
    printf("Escribe salir o x para finalizar.\n");
    printf("Numero de sesiones: ");
    system(custom_cmd_buffer);

    scanf("%d",&sesions_number);
    printf("Se crearan sesiones desde 1 - %d.\n",sesions_number);

    while (exit_program==0){
        printf("\nNombre del curso: ");
        scanf(" %[^\n]s", curse_name);
        comparation = strcmp(curse_name,"x");
        comparation2 = strcmp(curse_name,"salir");
        if (comparation == 0 || comparation2 == 0){
            printf("Cerrando programa...");
            break;
        }

        sesions_number++;
        for (int x = 1; x < sesions_number; x++){
            snprintf(custom_cmd_buffer, 300, "mkdir \".\\%s\\Sesion%d\"",curse_name,x);
            system(custom_cmd_buffer);
        }
        printf("Carpetas del curso %s creadas correctamente.\n", curse_name);

    }
    return 0;
}