#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
int lanch,cont=1;
do{

printf("Opções: [1] BigMac [2] Quarteirão [3] MacChiken [4] Cheddar MacMelt [5] MacMax \n Digite a opção de 1 à 5 para selecionar um lanche desejado: ");
scanf("%d",&lanch);
switch(lanch) {
	case 1: lanch = printf("BigMac \n");
		break;
	case 2: lanch = printf("Quarteirão \n");
		break;
	case 3: lanch = printf("MacChiken \n");
		break;
	case 4: lanch = printf("Cheddar MacMelt \n");
		break;
	case 5: lanch = printf("MacMax \n");
		break;
	
	default: printf("Opção Inválida! \n");
		break;
		}
}	while(cont!=0);
	system("PAUSE");
	
	return 0;
}
