#include<stdio.h>

int main (void){

int i=0, n, num[255], sum=0, me;

printf("Ingrese la cantidad de num\n");
scanf("%d",&n);

while (i < n){
    printf("Ingrese num\n");
    scanf("%d",&num[i]);
    i++;
}

i = 0;
while (i < n){
    sum = sum + num[i];
    i++;
}

me= sum / n;
printf("Su media es: %d\n", me);


return 0;
}
