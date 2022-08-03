#include <stdio.h>

int i=0, prod=1,n;

int main() {

printf("ingrese el numero factorial:\n");
scanf ("%d", &n);

for (i=0;i<n;i++){
       prod = prod * (i+1);
}

printf ("%d\n",prod);

return 0;
}
