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
# Versão      : 0.1  -  27/06/2022
# Sobre       : Aula 03 - Exibição e declaração de valores inteiros
# License     : Treinamento
#------------------------------------------------------------------*/

#include <stdio.h>

/* Declarando Variáveis */

// No C, declara-se ou a variável informando apenas o tipo:
int resets;
int aleatorio;

//Ou já se informa o valor
int contador = 10;


//Função principal
int main (void){

	//Podendo se informar o valor da variável dentro da função
	resets = 4;
	
	printf ("Já tem %d dias desde o último reset no servidor!\nQuantidade de resets: %d\n", contador, resets);
	printf ("Digito verificador: %d\n", (aleatorio));
	return 0;
	
}
