#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.c"


void registrarProfesor(Profesor *profesor) {
    printf("Ingrese el nombre del profesor: ");
    scanf("%s", profesor->nombre);

    printf("Ingrese la carrera del profesor: ");
    scanf("%s", profesor->carrera);

    int i;
    int numMaterias;

    do {
        printf("Ingrese la cantidad de materias que dicta (entre 2 y 3): ");
        scanf("%d", &numMaterias);
    } while (numMaterias < 2 || numMaterias > 3);

    for (i = 0; i < numMaterias; i++) {
        printf("Ingrese el nombre de la materia %d: ", i + 1);
        scanf("%s", profesor->materias[i]);

        printf("Ingrese el paralelo de la materia %d: ", i + 1);
        scanf("%s", profesor->paralelo);
    }
}

void registrarEstudiante(Estudiante *estudiante) {
    printf("Ingrese el nombre del estudiante: ");
    scanf("%s", estudiante->nombre);

    printf("Ingrese el nivel del estudiante: ");
    scanf("%s", estudiante->nivel);

    printf("Ingrese la carrera del estudiante: ");
    scanf("%s", estudiante->carrera);

    int i;
    int numMaterias;

    do {
        printf("Ingrese la cantidad de materias que toma (entre 3 y 7): ");
        scanf("%d", &numMaterias);
    } while (numMaterias < 3 || numMaterias > 7);

    for (i = 0; i < numMaterias; i++) {
        printf("Ingrese el nombre de la materia %d: ", i + 1);
        scanf("%s", estudiante->materias[i]);

        printf("Ingrese la cantidad de créditos de la materia %d: ", i + 1);
        scanf("%d", &estudiante->creditos[i]);
    }






}