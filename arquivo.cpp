#include "arquivo.h"

/*  Andre Viana Sena de Souza - 26/08/2014
**  PAA Projeto #1 - R2D2
*/

Lista<long int>* LEIA(ArquivosComputadorCentral arquivo)
{
    FILE* entrada;

    switch(arquivo)
    {
        case arquivo1k:
            entrada = fopen("projeto1_R2D2_arquivosNumerosInteiros/1000int.txt", "r");
            printf("Efetuando leitura do arquivo 1000int.txt.\n");
        break;
        case arquivo2k:
            entrada = fopen("projeto1_R2D2_arquivosNumerosInteiros/2000int.txt", "r");
            printf("Efetuando leitura do arquivo 2000int.txt.\n");
        break;
        case arquivo4k:
            entrada = fopen("projeto1_R2D2_arquivosNumerosInteiros/4000int.txt", "r");
            printf("Efetuando leitura do arquivo 4000int.txt.\n");
        break;
        case arquivo8k:
            entrada = fopen("projeto1_R2D2_arquivosNumerosInteiros/8000int.txt", "r");
            printf("Efetuando leitura do arquivo 8000int.txt.\n");
        break;
        case arquivo16k:
            entrada = fopen("projeto1_R2D2_arquivosNumerosInteiros/16000int.txt", "r");
            printf("Efetuando leitura do arquivo 16000int.txt.\n");
        break;
        case arquivo32k:
            entrada = fopen("projeto1_R2D2_arquivosNumerosInteiros/32000int.txt", "r");
            printf("Efetuando leitura do arquivo 32000int.txt.\n");
        break;
        case arquivo64k:
            entrada = fopen("projeto1_R2D2_arquivosNumerosInteiros/64000int.txt", "r");
            printf("Efetuando leitura do arquivo 64000int.txt.\n");
        break;
        case arquivo128k:
            entrada = fopen("projeto1_R2D2_arquivosNumerosInteiros/128000int.txt", "r");
            printf("Efetuando leitura do arquivo 128000int.txt.\n");
        break;
        case arquivo256k:
            entrada = fopen("projeto1_R2D2_arquivosNumerosInteiros/256000int.txt", "r");
            printf("Efetuando leitura do arquivo 256000int.txt.\n");
        break;
    }

    if(entrada == NULL)
    {
        printf("O arquivo nao esta disponivel para leitura.\n");
        return NULL;
    }

    Lista<long int>* retorno = new Lista<long int>;
    int buffer;

    while(!feof(entrada))
    {
        fscanf(entrada, "%d", &buffer);
        retorno->Inserir(buffer);
    }

    fclose(entrada);
    entrada = NULL;
    printf("Leitura encerrada com sucesso.\n");
    return retorno;
}
