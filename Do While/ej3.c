#include<stdio.h>

int i=0, rta;


int main (void){

printf ("Cual es numero que es la respuesta al todo?\n");

do{
scanf ("%d", &rta);
if (rta==42){
    i = 4;
}else{
    printf ("%d no es correcto\n", rta);
    i++;
    }
}
while (i<4);

printf ("42 es la respuesta al todo\n");

return 0;
}
