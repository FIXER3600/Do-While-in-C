#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
int lanch,cont=1;
do{

printf("Op��es: [1] BigMac [2] Quarteir�o [3] MacChiken [4] Cheddar MacMelt [5] MacMax \n Digite a op��o de 1 � 5 para selecionar um lanche desejado: ");
scanf("%d",&lanch);
switch(lanch) {
	case 1: lanch = printf("BigMac \n");
		break;
	case 2: lanch = printf("Quarteir�o \n");
		break;
	case 3: lanch = printf("MacChiken \n");
		break;
	case 4: lanch = printf("Cheddar MacMelt \n");
		break;
	case 5: lanch = printf("MacMax \n");
		break;
	
	default: printf("Op��o Inv�lida! \n");
		break;
		}
}	while(cont!=0);
	system("PAUSE");
	
	return 0;
}
