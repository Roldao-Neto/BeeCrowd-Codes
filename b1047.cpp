#include <stdio.h>

int main()
{
    int hi, mi, hf, mf;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    int horas, min;

    horas = hf-hi;

    min = mf-mi;
    if(min<0){
        min = min + 60;
        horas = horas - 1;
    }

    if(horas<0){
        horas = horas + 24;
    }

    if(horas==0 && min==0) horas = horas + 24;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, min);
    
    return 0;
}
