#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tres8tao();
int calibre12();
int municao38();
int municao12();

int main() {
	int inventory[5][10];
	int flag=0;
	int opcao=0;
	int adicionar=0;
	int remover=0;
	
	system("color 74");
	
	printf("INVENTORIO DE ARMAMENTO \n");
	system("pause");
	system("cls");
	
	do{
		system("cls");
		system("color 04");
		printf("	1| adiconar \n");
		printf("	2| remover \n");
		printf("insira o opcao que deseja executar: ");
		scanf("%d",&opcao);

		if(opcao == 1){
			
			system("cls");
			printf("selecione item que deseja adicionar \n");
			printf("	1| Revolver 38 \n");
			printf("	2| Calibre 12 \n");
			printf("	3| Municao 38 \n");
			printf("	4| Municao 12 \n");
			scanf("%d",& adicionar);
			system("cls");
		
			switch(adicionar){
				case 1: tres8tao();break;
				case 2: calibre12();break;
				case 3: municao38();break;
				case 4: municao12();break;
				default: printf("OPCAO INVALIDA \n");
				system("pause");
			}
		}
	
		if(opcao == 2){
			
			system("cls");
			printf("selecione item que deseja remover \n");
			printf("	1| Revolver 38 \n");
			printf("	2| Calibre 12 \n");
			printf("	3| Municao 38 \n");
			printf("	4| Municao 12 \n");
			scanf("%d",&remover);
			system("cls");
		}
		
		if(opcao != 1 && opcao != 2){
			printf("OPCAO INVALIDA, TENTE NOVAMENTE!! \n");
			system("pause");
			system("cls");
		}

	}while(flag==0);
	return 0;
}


int tres8tao() {
	int i=0;
	int j=0;
	for (i=0;i<=3;i++){
		for (j=0;j<=2;j++){	
		}
		
	}
}
int municao38() {
	int i=0;
	int j=0;
	for (i=0;i<=2;i++){
		for ( j=0;j<=1;j++){		
		}	
	}
}
int calibre12() {
	int i=0;
	int j=0;
	for (i=0;i<=3;i++){
		for (j=0;j<=7;j++){		
		}	
	}
}
int municao12() {
	int i=0;
	int j=0;
	for (i=0;i<=2;i++){
		for (j=0;j<=1;j++){	
		}	
	}
}
