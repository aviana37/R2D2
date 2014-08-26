#ifndef ARQUIVO_H_INCLUDED
#define ARQUIVO_H_INCLUDED

/*
**  Andre Viana Sena de Souza - 26/08/2014
**
**  Definicoes para leitura de arquivos.
**/

#include <stdio.h>
#include "lista.h"

enum ArquivosComputadorCentral
{
    arquivo1k,
    arquivo2k,
    arquivo4k,
    arquivo8k,
    arquivo16k,
    arquivo32k,
    arquivo64k,
    arquivo128k,
    arquivo256k,
};

Lista<int>* LEIA(ArquivosComputadorCentral);

#endif // ARQUIVO_H_INCLUDED
