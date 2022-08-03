


#include<stdio.h>

int main (void){

int k=1,m=2;
while(k<6 && m<50)
{
m = m * 2;
printf("%d %d\n",m,k);
m = m + 1;
k = k + 2;
}
printf("%d %d\n",m,k);

return 0;
}
