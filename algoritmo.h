#ifndef ALGORITMO_H_INCLUDED
#define ALGORITMO_H_INCLUDED

/*  Andre Viana Sena de Souza - 26/08/2014
**  PAA Projeto #1 - R2D2
*/

#include "lista.h"
#include "arquivo.h"
#include "cronometro.h"

/** \file algoritmo.h
\brief Contém todos os métodos dos algoritmos utilizados no programa.

Caso fosse necessário utilizar os algoritmos com vetores de tipos diferentes,
 templates seriam uma opção viável.\n
Busca binária e QuickSort são algoritmos que funcionam a partir da técnica de divisão e conquista.

    \fn void QuickSort(long int* vetor, long int n)
        \brief Ordena um vetor de inteiros recursivamente.
        \param vetor Vetor de inteiros.
        \param n Quantidade de elementos no vetor.

    \fn unsigned long BuscaBinaria(long int* vetor, long int elemento, unsigned long esq, unsigned long dir)
        \brief Procura pelo elemento no vetor, retornando o index em que o elemento se encontra.\n
        Se ele não existir dentro do vetor, o retorno será -1.
        \param vetor Vetor de inteiros.
        \param elemento Elemento a ser pesquisado.
        \param esq Limite esquerdo do vetor.
        \param dir Limite direito do vetor.

    \fn unsigned long CONTE(Lista<long int>* numeros)
        \brief Retorna quantos pares de números da lista resultam em zero quando somados.

        O algoritmo procura por numeros de sinais oposto, pois somente eles, quando somados
         ao primeiro número, resultarão em zero. Para acelerar o processo de busca, todos os itens
         são transferidos para um vetor. O mesmo é ordenado com o algoritmo QuickSort para depois servir
         como base para o processo de pesquisa binária.\n
        Este processo de otimização faz o algoritmo executar a tarefa aproximadamente 1000 vezes mais rápido
         que uma busca linear iterando diretamente nos itens da lista.
        \param numeros Ponteiro de lista encadeada simples contendo os números a serem avaliados.
         Deletado após uso.

    \fn bool VerificaPrimo(unsigned long numero)
        \brief Avalia se numero é primo ou não.

    \fn unsigned long MAIORNUMEROPRIMO(unsigned long limite_superior)
        \brief Retorna o maior numero primo dentro do limite superior definido.

    \fn Lista<unsigned long>* AlgoritmoR2D2()
        \brief Um algoritmo especial. Retorna uma lista de números primos.\n
        Precisa de todos os algoritmos definidos anteriormente, os métodos de cronômetro,
         e a função LEIA.

        Algoritmo de invasão do R2D2\n
            para todo arquivo de números inteiros de diversas quantidades faça\n
                LEIA(arquivo de números inteiros)\n
                QUANTIDADE = CONTE(quantos pares de números inteiros cuja soma é igual à zero)\n
                NUMPRIMO = MAIORNUMEROPRIMO(QUANTIDADE)\n
                INSIRA(em uma lista L o NUMPRIMO)\n
            fim para\n
            return L\n
*/

void QuickSort(long int* vetor, long int n);
unsigned long BuscaBinaria(long int* vetor, long int elemento, unsigned long esq, unsigned long dir);
unsigned long CONTE(Lista<long int>* numeros);
bool VerificaPrimo(unsigned long numero);
unsigned long MAIORNUMEROPRIMO(unsigned long limite_superior);

Lista<unsigned long>* AlgoritmoR2D2();

#endif // ALGORITMO_H_INCLUDED
