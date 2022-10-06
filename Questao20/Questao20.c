#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <gc/gc.h>
#include <time.h>

int main(void){
const int tam = 100000;
clock_t x1;
clock_t x2;
x1 = clock();
    GC_INIT();
        for(int i = 0; i < tam; i++){
            int **p = GC_MALLOC(sizeof(int));  }

x1 = clock() - x1;
printf ("Levou %f seg para a blibioteca ser carregada\n",((float)x)/CLOCKS_PER_SEC);

x2 = clock();
    for(int i = 0; i < tam; i++){
        int **j = malloc(sizeof(int));
        free(j);
    }

x2 = clock() - x2;
printf ("Levou %f seg para carregar a função de alocação e liberação com malloc e free\n",((float)y)/CLOCKS_PER_SEC);

// Com malloc e free foi mais rápido do que com a biblioteca.
    return 0;
}

