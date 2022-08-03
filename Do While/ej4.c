#include<stdio.h>

int num;

int main (void){

do{
printf ("Ingrese un numero para obtener su reciproco o ingrese 0 para finalizar:\n");
scanf ("%d", &num);
if (num!=0){
printf ("Su  reciproco es: 1/%d\n", num);
}
}
while (num !=0);

return 0;
}
