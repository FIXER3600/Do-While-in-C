#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
int main( ) {
setlocale(LC_ALL,"PORTUGUESE");
float MUL, PES , KL ;
int i,cont=0;

printf("De quantos pescadores deseja calcular a multa?");
scanf("%d",&i);
do{
	

printf("Cálculo de Multa ao Pescador \n");
printf("Digite o Peso: \n");
scanf("%f",&PES);
KL = (PES - 50);
if (PES>50){
MUL = (KL * 4);
printf("A Multa é de: %.2f \n", MUL);
}
else {
printf("Não haverá Multa \n");
}
cont++;

} while(cont!=i);
system("PAUSE");	
return 0;
}
