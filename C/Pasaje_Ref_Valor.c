#include <stdio.h>
void mifunc(char *mivar);

int main (void){
    
    char mivarlocal=3;
    mifunc(&mivarlocal);
    printf("mivarlocal en main vale: %d\n",mivarlocal);
    return 0;
}
void mifunc(char *mivar){
    
    (*mivar)++;
    printf("mi var en mifunc vale: %d\n",*mivar);

}
