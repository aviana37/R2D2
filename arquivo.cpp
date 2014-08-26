#include "arquivo.h"

Lista<int>* LEIA(ArquivosComputadorCentral arquivo)
{
    FILE* entrada;

    switch(arquivo)
    {
        case arquivo1k:
            entrada = fopen("projeto1_R2D2_arquivosNumerosInteiros/1000int.txt", "r");
        break;
        case arquivo2k:
            entrada = fopen("projeto1_R2D2_arquivosNumerosInteiros/2000int.txt", "r");
        break;
        case arquivo4k:
            entrada = fopen("projeto1_R2D2_arquivosNumerosInteiros/4000int.txt", "r");
        break;
        case arquivo8k:
            entrada = fopen("projeto1_R2D2_arquivosNumerosInteiros/8000int.txt", "r");
        break;
        case arquivo16k:
            entrada = fopen("projeto1_R2D2_arquivosNumerosInteiros/16000int.txt", "r");
        break;
        case arquivo32k:
            entrada = fopen("projeto1_R2D2_arquivosNumerosInteiros/32000int.txt", "r");
        break;
        case arquivo64k:
            entrada = fopen("projeto1_R2D2_arquivosNumerosInteiros/64000int.txt", "r");
        break;
        case arquivo128k:
            entrada = fopen("projeto1_R2D2_arquivosNumerosInteiros/128000int.txt", "r");
        break;
        case arquivo256k:
            entrada = fopen("projeto1_R2D2_arquivosNumerosInteiros/256000int.txt", "r");
        break;
    }

    if(entrada == NULL)
        return NULL;

    Lista<int>* retorno = new Lista<int>;
    int buffer;
    while(!feof(entrada))
    {
        fscanf(entrada, "%d", &buffer);
        retorno->Inserir(buffer);
    }

    fclose(entrada);
    entrada = NULL;
    return retorno;
}
