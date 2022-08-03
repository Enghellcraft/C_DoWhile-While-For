#include<stdio.h>

int main (void){

int n, i, k=0,r=1,e=0,primo[250];

printf ("ingrese un numero:\n");
scanf ("%d", &n);

while(e<n){
    i=r;
while (i > 0){
    if (r%(i)==0){
        k++;
        //printf("valor k %d\n",k);
        //printf("valor r %d\n",r);
    }
    i--;
}

if(k<=2){
   primo[e]=r;
   e++;
    }
    k=0;
    r++;
}
for(i=0;i<e;i++){
printf("%d\n",primo[i]);
}
return 0;
}
