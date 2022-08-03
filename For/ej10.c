#include<stdio.h>
#include<string.h>
#include<conio.h>

int grade[255], sum[255],
int i=0, j=0;
char nombre[30][30];
float prom[255];

int main (void){

printf("A continuacion podra ingresar los datos de los alumnos\n");


for (i=0;i<10;i++){
        printf("ingrese nombre y apellido:\n");
        fflush(stdin);
        gets(nombre[i]);
        for (j=0; j<3; j++) {
                printf("ingrese las notas :\n");
                fflush(stdin);
                scanf("%d", &grade[j]);
                sum[i] = sum[i] + grade [j];

                            }



i = 0;
j = 0;
printf ("NOMBRE      SEXO      HORAS TRABAJO   SUELDO/HORA   COBRO\n");
for (i=0; i<ni; i++ ){
        printf ("\n%s     F         %dhrs             $%d         $%d\n ",nombrem[i], hm[i], spm[i], cobrm[i]);
        }

for (j=0; j<nj; j++){
        printf ("%s     M         %dhrs             $%d         $%d\n ",nombreh[j], hh[j], sph[j], cobrh[j]);
        }

promh = sumh/nj;
promm = summ/ni;
printf("El sueldo promedio de mujeres es: $%f, y el de hombres: $%f", promm, promh);

return 0;

}
