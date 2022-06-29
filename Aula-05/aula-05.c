/*
#------------------------------------------------------------------
# Sobre a criação
#
# Autor       : Matheus da Rosa - Quixotte
# Repositório : https://github.com/quixote404
# Email       : hologramrp.@proton.me
#
#------------------------------------------------------------------
# Sobre o programa
#
# Versão      : 0.1     -  29/06/2022
# Sobre       : Aula 05 - Abordagem sobre o Float e Double
# License     : Treinamento
#------------------------------------------------------------------*/

#include <stdio.h>

/* - Observações 
Float  = Forma numérica com casas decimais.
Double = É uma forma de exibição com mesmo intuito que o float, porém com mais alta precisão.
*/

//Declarando variáveis

float numeroPi, exponencial;

/* 
Esta função serve para limpar a tela de terminais que possuam compatibilidade com ASCII
Podendo não funcionar em máquinas Windows / MacOS
*/


int limpa_tela(void){
	printf("\e[1;1H\e[2J");
}

int main (void){
  
	limpa_tela();
	numeroPi = 3.14;
	printf ("O valor de Pi como Float é de: %.f \n", numeroPi);
	
	double numeroPi = 3.1415926535897932384626433832795;
	printf ("O valor de Pi como Double é de: %.7f \n", numeroPi);
	
	//Continuação dos estudos
	getchar();
	printf("\e[1;1H\e[2J");
	
	float exponencial = 1E6;
	float exponencialBase = 10E-3;
	printf ("O valor do exponencial é de %.2f, \n", exponencial);
	printf ("Já o valor alterado deste exponencial vai para: %.2f\n\r\a", exponencialBase);
	
	return 0;

}