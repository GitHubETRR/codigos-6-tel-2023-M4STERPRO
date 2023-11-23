#include <stdio.h>

union floatBytes {
    float num;
    
    struct {
        unsigned int mantisa: 23;
        unsigned int exponente: 8;
        unsigned int signo: 1;
    };
};

int main() {
    
    union floatBytes flot;
    printf("Escriba el número flotante\n");
    scanf("%f", &flot.num);

    printf("El signo del flotante es: %d\n", flot.signo);
    printf("El exponente del flotante es: %d\n", flot.exponente);
    printf("La mantisa del flotante es: %d\n", flot.mantisa);

    return 0;
}
