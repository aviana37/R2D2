#ifndef ARQUIVO_H_INCLUDED
#define ARQUIVO_H_INCLUDED

/*  Andre Viana Sena de Souza - 26/08/2014
**  PAA Projeto #1 - R2D2
*/

/** \file arquivo.h \brief Define o método de leitura de arquivos.
*   \enum ArquivosComputadorCentral
*       \brief Define os possíveis valores para a função LEIA.
**/

#include <stdio.h>
#include "lista.h"

enum ArquivosComputadorCentral
{
    arquivo1k,  /**<\brief "1000int.txt".*/
    arquivo2k,  /**<\brief "2000int.txt".*/
    arquivo4k,  /**<\brief "4000int.txt".*/
    arquivo8k,  /**<\brief "8000int.txt".*/
    arquivo16k, /**<\brief "16000int.txt".*/
    arquivo32k, /**<\brief "32000int.txt".*/
    arquivo64k, /**<\brief "64000int.txt".*/
    arquivo128k,/**<\brief "128000int.txt".*/
    arquivo256k,/**<\brief "256000int.txt".*/
};

/** \fn Lista <long int>* LEIA(ArquivosComputadorCentral arquivo)
*       \brief Retorna todos os números contidos no arquivo.
        \param arquivo Define qual arquivo deve ser lido.
*/
Lista<long int>* LEIA(ArquivosComputadorCentral arquivo);

#endif // ARQUIVO_H_INCLUDED
