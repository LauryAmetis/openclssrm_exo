#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int age = 0; // On initialise la variable à 0
    printf("Bonjour %s \n", argv[1]);

    char name[10] = *argv[1];
    char lastName[10] = argv[2];
    char fullName[20];

    // strcpy(fullName, name);
    // strcat(fullName, " ");
    // strcat(fullName, lastName);

    printf("Quel age avez-vous ? ");
    scanf("%d", &age); // On demande d'entrer l'âge avec scanf
    printf("Ah ! Vous avez donc %d ans !\n\n", age);
    printf("Ton nom est %s \n", name);
        
    return 0;
}