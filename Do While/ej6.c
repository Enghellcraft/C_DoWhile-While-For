#include<stdio.h>

char letr;

int main (void){

do{
    printf ("Ingrese una letra o 0 para finalizar:\n");
    scanf ("\n%c", &letr);
    switch (letr){
         case 'a' :printf(".-\n" );
         break;
         case 'e' :printf( ".\n" );
         break;
         case 'i' :printf( "..\n" );
         break;
         case 'o' :printf( "---\n" );
         break;
         case 'u' :printf( ".--\n" );
         break;
         default : printf( "\nPrograma Finalizado" );
                }
} while (letr!='0');



return 0;
}
