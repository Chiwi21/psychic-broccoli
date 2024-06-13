#include <stdio.h>
#include <string.h>
#include "funciones.h"
void imprimirAlumnos(char alumnos[][2][20], double notas[][3]) {
    for (int i = 0; i < 6; i++) {
        printf("Nombre: %s ", alumnos[i][0]);
        printf("Apellido: %s ", alumnos[i][1]);
        double promedio = (notas[i][0] + notas[i][1] + notas[i][2]) / 3;
        printf("Promedio: %.2lf ", promedio);
        if (promedio >= 6) {
            printf("Aprobado\n");
        } else {
            printf("No aprobado\n");
        }
    }
}
void buscarAlumnoXApellido(char alumnos[][2][20], double notas[][3]) {
    char apellido[40];
    char nombre[40];
    int encontrado = 0;
    printf("Escriba el apellido del usuario: ");
    scanf("%s", apellido);
    printf("Escriba el nombre del usuario: ");
    scanf("%s", nombre);
    for (int i = 0; i < 6; i++) {
        if (strcmp(alumnos[i][1], apellido) == 0 && strcmp(alumnos[i][0], nombre) == 0) {
            printf("Nombre: %s ", alumnos[i][0]);
            printf("Apellido: %s ", alumnos[i][1]);
            double promedio = (notas[i][0] + notas[i][1] + notas[i][2]) / 3;
            printf("Promedio: %.2lf ", promedio);
            if (promedio >= 6) {
                printf("Aprobado\n");
            } else {
                printf("No aprobado\n");
            }
            encontrado = 1;
            break;
        }
    }
    if (encontrado == 0) {
        printf("No existe el alumno con ese apellido y nombre.\n");
    }
}
void editarCalificaciones(char alumnos[][2][20], double notas[][3]) {
    char apellido[40];
    char nombre[40];
    int encontrado = 0;
    double parc1, parc2, parc3;
    printf("Escriba el apellido del usuario: ");
    scanf("%s", apellido);
    printf("Escriba el nombre del usuario: ");
    scanf("%s", nombre);
    for (int i = 0; i < 6; i++) {
        if (strcmp(alumnos[i][1], apellido) == 0 && strcmp(alumnos[i][0], nombre) == 0) {
            printf("Escriba la Primera Nota Parcial: ");
            scanf("%lf", &parc1);
            printf("Escriba la Segunda Nota Parcial: ");
            scanf("%lf", &parc2);
            printf("Escriba la Tercera Nota Parcial: ");
            scanf("%lf", &parc3);
            notas[i][0] = parc1;
            notas[i][1] = parc2;
            notas[i][2] = parc3;
            printf("Calificaciones actualizadas.\n");
            encontrado = 1;
            break;
        }
    }
    if (encontrado == 0) {
        printf("No existe el alumno con ese apellido y nombre.\n");
    }
}