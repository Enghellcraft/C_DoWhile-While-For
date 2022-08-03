#include<stdio.h>

int main (void){

float x[255], y[255];
int i=0;


while (x[i]<=2){
        x[i] = 1.0 + i*0.1;
        i++;
}

i=0;
while (x[i]<=2){
    y[i] = ((4.0*x[i]*x[i])-(16.0*x[i])+15.0);
    i++;
}

i=0;
printf ("Valor x          Valor y            Valor\n");

while (x[i]<=2){
        printf ("%f         %f        ", x[i], y[i]);
        if (y[i]>= 0){
        printf ("POSITIVO\n");
        }else{
        printf ("NEGATIVO\n");}
        i++;
}

return 0;
}
