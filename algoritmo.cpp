#include "algoritmo.h"

void QuickSort(long* a, long n)
{
    if (n < 2)
        return;
    long p = a[n / 2];
    long *l = a;
    long *r = a + n - 1;
    while (l <= r)
    {
        if (*l < p)
        {
            l++;
        }
        else if (*r > p)
        {
            r--;
        }
        else
        {
            unsigned long t = *l;
            *l = *r;
            *r = t;
            l++;
            r--;
        }
    }
    QuickSort(a, r - a + 1);
    QuickSort(l, a + n - l);
}

unsigned long BuscaBinaria(long int* vetor, int elemento, unsigned long esq, unsigned long dir)
{
    if(esq<=dir)
    {
        unsigned long meio = (esq+dir)/2;
        if(vetor[meio] == elemento)
            return meio;
        else if(vetor[meio] > elemento)
            return BuscaBinaria(vetor, elemento, esq, meio-1);
        else if(vetor[meio] < elemento)
            return BuscaBinaria(vetor, elemento, meio+1, dir);
    }
    else
        return -1;
}

/*
**CONTE conta quantos pares de numeros da lista resultam em zero quando somados.
**O algoritmo procura por numeros de sinais oposto, pois somente eles, quando somados
**ao primeiro numero, resultarão em zero.
*/
unsigned long CONTE(Lista<long int>* numeros)
{
    long int* vetor = numeros->Vetor();
    long int n = numeros->Contador();
    long int atual, zero, contador=0;
    delete numeros;

    QuickSort(vetor, n);
    contador = 0;

    for(unsigned long c=0; c<n; c++)
    {
        if(vetor[c] > 0)
            break;
        if(BuscaBinaria(vetor, vetor[c]*-1, 0, n) > 0)
            contador++;
    }
    return contador;
}

bool VerificaPrimo(unsigned long numero)
{
    if(numero == 0 || numero == 1)
        return false;
    else
    {
        for(unsigned long c=2; c<numero; c++)
        {
            if(numero%c == 0)
                return false;
        }
        return true;
    }
}

unsigned long MAIORNUMEROPRIMO(unsigned long limite_superior)
{
    for(long int c=limite_superior; c>1; c--)
    {
        if(VerificaPrimo(c))
            return c;
    }
    return 0;
}

Lista<unsigned long>* AlgoritmoR2D2()
{
    ArquivosComputadorCentral atual=arquivo1k;
    Lista<unsigned long>* retorno = new Lista<unsigned long>;
    unsigned long QUANTIDADE;
    unsigned long maiornumero;

    do
    {
        printf("Executando algoritmo de contagem.\n");
        ComecarCronometro();
        QUANTIDADE = CONTE(LEIA(atual));
        printf("%u pares encontrados em %dms.\n", QUANTIDADE, TerminarCronometro());

        printf("Calculando proximo numero primo.\n");
        maiornumero = MAIORNUMEROPRIMO(QUANTIDADE);
        printf("Inserindo %u a lista de resultados.\n\n", maiornumero);

        retorno->Inserir(maiornumero);
        atual = (ArquivosComputadorCentral)((int)atual+1);
    }
    while(atual<=arquivo256k);

    return retorno;
}
