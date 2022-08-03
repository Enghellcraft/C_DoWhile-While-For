#include<stdio.h>

int salp=100, salj=150, year=0;

int main (void){
do{
salp = salp * 1.08;
salj = salj * 1.05;
year++;
} while (salp < salj);

printf ("la cantidad de años es: %d", year);

return 0;
}
