#include <stdio.h>

int i=0, sum=0, num;

int main() {

for (i=0;i<10;i++){
    printf ("Ingrese un numero impar\n");
    fflush(stdin);
    scanf ("%d", &num);
    while(num%2 == 0){
        printf("ha ingresado un numero par, escriba un impar\n");
        fflush(stdin);
        scanf ("%d", &num);
        }
    sum = sum + num;
}
  printf ("%d\n",sum);
return 0;
}
