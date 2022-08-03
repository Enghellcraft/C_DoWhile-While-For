#include<stdio.h>
#include<math.h>

int main (void){

int m, i=0, fact=1;

printf ("ingrese el numero\n");
scanf ("%d", &m);

while (m > 0){
        fact = fact * m;
    m--;
    i++;
}



printf ("Su factorial es: %d\n", fact);

return 0;
}

