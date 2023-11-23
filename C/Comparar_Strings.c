#include <stdio.h>

int stringCmp (const char* var1, const char* var2);

int main() {
    char var1[20];
    char var2[20];

    printf("Ingrese el primer string: ");
    scanf("%s", var1);
    printf("Ingrese el segundo string: ");
    scanf("%s", var2);

    int resultado = stringCmp(var1, var2);

    if (resultado == 0) {
        printf("Los strings son iguales.\n");
    } else {
        printf("Los strings son distintos.\n");
    }

    return 0;
}

int stringCmp (const char* var1, const char* var2)
{
    while (*var1 != '\0' || *var2 != '\0')
    {
        if (*var1 != *var2)
        {
            return 1;
        }
    var1++;
    var2++;
    }

    return 0;
}
