#include <stdio.h>

int main() 
{
    float num;
    unsigned char *pnum = (unsigned char *)&num;

    printf("Ingrese un número tipo float: ");
    scanf("%f", &num);

    printf("Ahora verás la variable bit a bit en hexadecimal\n");

    printf("Primer bit: %02x\n", pnum[0]);  // byte 0 (menos significativo)
    printf("Segundo bit: %02x\n", pnum[1]); // byte 1
    printf("Tercer bit: %02x\n", pnum[2]);  // byte 2
    printf("Cuarto bit: %02x\n", pnum[3]);  // byte 3 (más significativo)

    return 0;
}
