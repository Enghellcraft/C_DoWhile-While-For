#include<stdio.h>
#include<math.h>

int main (void){

int m, i=0, max, min, sum=0, cuad=0;
float prom;
int num[255];

printf ("ingrese la cantidad de los numeros\n");
scanf ("%d", &m);

while(i < m){
        printf ("ingrese el numero\n");
        scanf ("%d", &num[i]);
        i++;
            }
i = 0;
while(i < m){
        sum = sum + num[i];
        i++;
            }
printf ("la suma es: %d\n", sum);

i = 0;
prom = (float)sum / (float)m;
printf ("el promedio es: %f\n", prom);

i = 0;
max = num[0];
while (i < m){
        if ( max < num[i]){
            max = num[i];
                          }
            i++;
            }
printf ("el maximo es: %d\n", max);

i = 0;
min = num[0];
while (i < m){
        if ( num[i] < min ){
            min = num[i];
                          }
            i++;
            }
printf ("el minimo es: %d\n", min);

i = 0;
while (i < m){
        cuad = pow (num[i], 2);
        printf ("el cuadrado de cada numero es: %d\n", cuad);
        i++;
             }


return 0;
}
