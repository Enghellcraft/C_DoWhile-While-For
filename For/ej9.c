#include<stdio.h>
#include<string.h>
#include<conio.h>

int n, ni=0, nj=0,spm[255], sph[255], hm[255], hh[255], sumh=0, summ=0, cobrm[255], cobrh[255];
int i=0;
int j=0;
char sexo;
char nombreh[30][30];
char nombrem[30][30];
float promh, promm;

int main (void){

printf("ingrese la cantidad de personal:\n");


for (n=0;n<2;n++){
    printf("ingrese f o m para el sexo:\n");
    fflush(stdin);
    scanf("%c",&sexo);
    if (sexo == 'f'){
        printf("ingrese nombre y apellido:\n");
        fflush(stdin);
        gets(nombrem[i]);
        printf("ingrese horas trabajadas:\n");
        fflush(stdin);
        scanf("%d", &hm[i]);
        printf("ingrese sueldo por hora:\n");
        fflush(stdin);
        scanf("%d", &spm[i]);
        cobrm[i] = hm[i] * spm[i];
        printf ("%d", cobrm[i]);
        summ = summ + cobrm[i];
        ni = ni + 1;
        i++;
    }else{
        printf("ingrese nombre y apellido:\n");
        fflush(stdin);
        gets(nombreh[j]);
        printf("ingrese horas trabajadas:\n");
        fflush(stdin);
        scanf("%d", &hh[j]);
        printf("ingrese sueldo por hora:\n");
        fflush(stdin);
        scanf("%d", &sph[j]);
        cobrh[j] = hh[j] * sph[j];
        printf ("%d", cobrh[j]);
        sumh = sumh + cobrh[j];
        nj = nj + 1;
        j++;
        }
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

