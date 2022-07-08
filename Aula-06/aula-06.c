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
# Versão      : 0.1     -  08/07/2022
# Sobre       : Aula 06 - Abordagem sobre o Scanf
# License     : Treinamento
#------------------------------------------------------------------*/

#include <stdio.h>

/* - 
O programa a seguir faz a leitura de valores inseridos pelo usuário
e na sequência efetua sua soma.
*/

/* -  Limpar Tela Unix:
Esta função serve para limpar a tela de terminais que possuam compatibilidade com ASCII
Podendo não funcionar em máquinas Windows / MacOS
*/

// Declarando variáveis

int valorPrimario, valorSecundario, somaValores;

int limpa_tela(void){
	printf("\e[1;1H\e[2J");
	return 0;
}

int main (void){
  
	limpa_tela();
	printf ("Por gentileza, informe o primeiro valor: \n");
	scanf  ("%d", &valorPrimario);
	
	printf ("Por gentileza, informe o segundo valor: \n");
	scanf  ("%d", &valorSecundario);
	
	somaValores = valorPrimario + valorSecundario;
	
	printf ("A soma dos valores %d + %d é igual a: %d \n\n", valorPrimario, valorSecundario, somaValores );
	getchar();
	return 0;

}