#include <stdio.h>

struct Alumno
{
    char nombre[20];
    char apellido[20];
    int edad;
    char dni[10];
    float promedio;
};

int main()
{
    struct Alumno alumnos[5];

    // Ingreso datos para x alumnos
    printf("Ingrese datos para los alumnos\n");

    int i;
    
    for (i = 0; i < 5; i++)
    {
        printf("Datos para el alumno %d\n", i+1);
        printf("Nombre: ");
        scanf("%s", alumnos[i].nombre);
        printf("Apellido: ");
        scanf("%s", alumnos[i].apellido);
        printf("Edad: ");
        scanf("%d", &alumnos[i].edad);
        printf("DNI: ");
        scanf("%s", alumnos[i].dni);
        printf("Promedio: ");
        scanf("%f", &alumnos[i].promedio);
    }

    // Imprimo los datos de los alumnos ingresados
    printf("\nDatos de los alumnos ingresados:\n");
    printf("Nombre\tApellido\tEdad\tDNI\tPromedio\n");

    for (int i = 0; i <5; i++)
    {
        printf("%s\t%s\t\t%d\t%s\t%f\n", alumnos[i].nombre, alumnos[i].apellido, alumnos[i].edad, alumnos[i].dni, alumnos[i].promedio);
    }

    return 0;
}
