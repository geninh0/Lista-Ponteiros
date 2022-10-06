#include <stdio.h>
#include <assert.h>
#include <gc.h>

int main(void)
{
   const int tam = 100000000;
   GC_INIT();
    for (int i = 0; i < tam; i++){
      int **x = GC_MALLOC(sizeof *x);
      int *y = GC_MALLOC_ATOMIC(sizeof *y);
      assert(*x == 0);
      *x = GC_REALLOC(y, 3 * sizeof *x);
      if (i == size-1)
      printf("Tamanho do acumulo = %zu\n", GC_get_heap_size());   }

    return 0;
}
