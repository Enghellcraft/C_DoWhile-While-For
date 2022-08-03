#include<stdio.h>

int main (void){

int n, i=0;
float celcius[255], fahrenheit[255];

printf("Escribe la cantidad de numeros a ingresar: \n");
scanf("%d", &n);


while (i < n){
    printf("Escribe el numeros: \n");
    scanf("%f", &fahrenheit[i]);
    i++;
}

i = 0;

printf("Fahrenheit        Celcius\n");
while (i < n){
    celcius[i] = ((fahrenheit[i] - 32.0)* (5.0/9.0));
    printf("%f              %f\n", fahrenheit[i], celcius[i]);
    i++;
}
return 0;
}
