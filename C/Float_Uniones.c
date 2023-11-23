#include <stdio.h>

union {

    float num;
    unsigned char bytes[4];

}var;

int main()
{
    printf("Ingrese el valor de la variable float: ");
    scanf("%f", &var.num);

    printf("Ahora verás la variable bit a bit en hexadecimal\n");
    
    printf("Primer bit: %02x\n",var.bytes[0]);  //byte 0 (menos significativo)
    printf("Segundo bit: %02x\n",var.bytes[1]); //byte 1
    printf("Tercer bit: %02x\n",var.bytes[2]);  //byte 2
    printf("Cuarto bit: %02x\n",var.bytes[3]);  //byte 3 (más significativo)

    return 0;
}
