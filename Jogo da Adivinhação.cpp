#include <stdio.h>
#include <stdlib.h>

int rodando (int niveis){
	
	int numeroSecreto = (rand() % 100);
	
	int jogando;
		
	while(jogando = 1){
			
		int chute;
		int on = 1;
		
		switch(niveis){
			case 1:
				printf("Voce tem 7 tentativas para tentar advinhar o numero secreto \n");
			
			while(on < 7){
				for(int tentativa = 1; tentativa <= 7; tentativa++){
					printf("Essa eh sua tentativa de numero %d\n", tentativa);
					scanf("%d", &chute);
				    on++;
				    
				if(chute < numeroSecreto){
					printf("Seu chute foi menor que o numero secreto\n");
				}
				
				if(chute > numeroSecreto){
					printf("Seu chute foi maior que o numero secreto\n");
				}
				
				if(chute == numeroSecreto){
				printf("\nParabens voce acertou !!!\n");
				
				 return false;
				}
			
			}
			printf("Acabou suas tentativas\n");
			return false;
			} 
			
			
			//nivel 2 
			
		case 2:
			printf("Voce tem 5 tentativas para tentar advinhar o numero secreto \n");
			
			while(on < 5){
				for(int tentativa = 1; tentativa <= 5; tentativa++){
					printf("Essa eh sua tentativa de numero %d\n", tentativa);
					scanf("%d", &chute);
				
				if(chute < numeroSecreto){
					printf("Seu chute foi menor que o numero secreto\n");
				}
				
				if(chute > numeroSecreto){
					printf("Seu chute foi maior que o numero secreto\n");
				}
				
				if(chute == numeroSecreto){
					printf("\nParabens voce acerto !!!\n");
					return false;
				}
			}
			printf("Acabou suas tentativas\n");
			return false;
			} 
			
			break;
			
			//nivel 3
			
		case 3:
			printf("Voce tem 3 tentativas para tentar advinhar o numero secreto \n");
			
			while(on < 3){
				for(int tentativa = 1; tentativa <= 3; tentativa++){
					printf("Essa eh sua tentativa de numero %d\n", tentativa);
					scanf("%d", &chute);
				
				if(chute < numeroSecreto){
					printf("Seu chute foi menor que o numero secreto\n");
				}
				
				if(chute > numeroSecreto){
					printf("Seu chute foi maior que o numero secreto\n");
				}
				
				if(chute == numeroSecreto){
					printf("\nParabens voce acerto !!!\n");
					return false;
				}
			}
			
			printf("Acabou suas tentativas\n");
			return false;
			} 
			
		}
		
		jogando = 0;
	}
		
return true;
}


int main(){

	printf("******************************************\n");
	printf("* Bem-Vindo ao nosso jogo de adivinhacao *\n");
	printf("******************************************\n");
	
	//escolha no menu
	int menu;
	
	printf("Bem-vindo ao menu: \n");
	printf("(1) Desejo jogar\n");
	printf("(2) Desejo sair\n");
	scanf("%d", &menu);
	
	
	
	switch(menu){
		case 1:
			int nivel;
			printf("Favor escolher o nivel: \n");
			printf("Nivel 1 = 7 tentativas \n");
			printf("Nivel 2 = 5 tentativas \n");
			printf("Nivel 3 = 3 tentativas \n");
			scanf("%d", &nivel);
			
			rodando(nivel);
			
			break;
			
		case 2:
			printf("O jogo esta sendo fechado\n");
			printf("Ate a proxima!!!\n");
		break;
			
		default:
			printf("Favor digitar um valor valido");
		break;
	}
	
	
	return 0;
}
