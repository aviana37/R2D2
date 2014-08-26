#include "cronometro.h"

static clock_t timer;

void ComecarCronometro()
{
    timer = clock();
}

unsigned long TerminarCronometro()
{
    timer = clock() - timer;
    return (((float)timer)/CLOCKS_PER_SEC)*1000;
}
