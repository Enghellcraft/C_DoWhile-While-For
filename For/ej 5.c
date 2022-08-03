
#include <stdio.h>


int main() {

int k=1,m, i=0, resul=0;
printf ("ingrese los numeros impares a sumar\n");
scanf ("%d", &m);

for (i=0;i<m;i++){
        if (k%2){
        resul = resul + k;
        printf("%d\n",resul);}
        k++;
            }

printf("%d\n",resul);

return 0;
}
