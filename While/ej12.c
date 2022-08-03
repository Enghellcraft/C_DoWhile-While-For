#include<stdio.h>

int ano, i;
float  inter=0.05, saldo=100000;

int main (void){

    printf ("Ingrese el año de inicio: \n");
    scanf ("%d\n", &ano);

    while (saldo >= 12000){
        saldo = (saldo*inter) - 12000.0;
        ano++;
        printf ("%f       %d", saldo, ano);
    }

    printf ("El año donde no podra retirar mas sera: %d", ano);



return 0;
}
