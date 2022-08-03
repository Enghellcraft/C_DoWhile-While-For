#include<stdio.h>

int main (void){

int k=0,m, i=0, resul=0;
printf ("ingrese los nnumeros impares a sumar\n");
scanf ("%d", &m);

while(i < m){
        if (k%2){
        resul = resul + k;
        i++;
        printf("%d\n",resul);}
        k++;
            }

printf("%d\n",resul);

return 0;
}
