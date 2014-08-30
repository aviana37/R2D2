#include "algoritmo.h"
#include <stdio.h>

/*  Andre Viana Sena de Souza - 26/08/2014
**  PAA Projeto #1 - R2D2
*/

/** \file main.cpp
*   \brief Armazena a rotina principal do programa,
*    executando o algoritmo de invasão de R2D2 e mostrando os resultados.
*/

int main()
{
    Lista<unsigned long>* primos = NULL;
    char resposta ='r';

    printf("Deseja executar o algoritmo? (s/n)\n");
    scanf("%s", &resposta);
    while(true)
    {
        if(resposta == 's' || resposta == 'S')
        {
            printf("\nDando inicio a magia do espaco.\n");
            if(primos)
            {
                delete primos;
                primos = NULL;
            }
            primos = AlgoritmoR2D2();

            printf("Resultados: ");
            for(primos->It_Inicio(); primos->Iterador()!=NULL; primos->It_Proximo())
                printf("%d ", *primos->Iterador());
            printf("\nAdeus.\n");
            break;
        }
        else if(resposta == 'n' || resposta == 'N')
        {
            printf("Adeus.\n");
            break;
        }
        else
        {
            printf("Deseja executar o algoritmo? (s/n)\n");
            scanf("%s", &resposta);
        }
    }
    if(primos)
        delete primos;
    return 0;
}
