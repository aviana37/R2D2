#include "arquivo.h"
#include "cronometro.h"
#include "algoritmo.h"
#include <stdio.h>

void MostrarMenu()
{
    printf( "SELECIONE ALGO\n"
            "1-Executar algoritmo.\n"
            "2-\n");
}

int main()
{
    Lista<unsigned long>* primos;
    int resposta;
    MostrarMenu();
    scanf("%d", &resposta);

    if(resposta == 1)
        primos = Algoritmo();

    for(primos->It_Inicio(); primos->Iterador()!=NULL; primos->It_Proximo())
        printf("%d ", *primos->Iterador());
    printf("\n");
    return 0;
}
