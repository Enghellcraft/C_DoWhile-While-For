#include<stdio.h>
#include<math.h>

int main (void){

int n, i, k=0;

printf ("ingrese un numero:\n");
scanf ("%d", &n);
i = n;
while (i > 1){
    if (n%i==0){
        k++;
        printf("%d\n",k);
    }
    i--;
}


if(k>1){
   printf ("no es primo");
    }else {
    printf ("es primo");
    }



return 0;
}
