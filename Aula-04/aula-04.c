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
# Versão      : 0.1     -  28/06/2022
# Sobre       : Aula 04 - Abordagem do tipo inteiro e a quantidade de espaço que consome
# License     : Treinamento
#------------------------------------------------------------------*/


#include <stdio.h>

/* 
Esta função serve para limpar a tela de terminais que possuam compatibilidade com ASCII
Podendo não funcionar em máquinas Windows / MacOS
*/

int limpa_tela(void){

	printf("\e[1;1H\e[2J");
}

int main (void){

	limpa_tela();
	printf ("| --- Tipo ---    | --- Bytes --- | \n");
	printf ("|                                 | \n");
	printf ("|     Char        |  %d bytes:     |  \n", sizeof(char));
	printf ("|     Int         |  %d bytes:     | \n",  sizeof(int));
	printf ("|     Float       |  %d bytes:     | \n",  sizeof(float));
	printf ("|     Short       |  %d bytes:     | \n",  sizeof(short));
	printf ("|     Long        |  %d bytes:     | \n",  sizeof(long));
	printf ("|     Double      |  %d bytes:     | \n",  sizeof(double));
	printf ("|     Long Double |  %d bytes:    |\n",    sizeof(long double));
	printf ("|---------------------------------| \n");
	return 0;

}