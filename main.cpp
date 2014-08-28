#include "arquivo.h"
#include "cronometro.h"
#include "algoritmo.h"
#include <stdlib.h>
#include <stdio.h>

void MostrarMenu()
{
    printf( "SELECIONE ALGO\n"
            "1-Executar algoritmo.\n"
            "2-Sair.\n");
}

int main()
{
    Lista<unsigned long>* primos;
    int resposta;
    MostrarMenu();
    scanf("%d", &resposta);

    if(resposta == 1)
    {
        primos = AlgoritmoR2D2();
        for(primos->It_Inicio(); primos->Iterador()!=NULL; primos->It_Proximo())
            printf("%d ", *primos->Iterador());
        printf("\n");
    }
    else
        printf("Adeus.\n");
    return 0;
}
