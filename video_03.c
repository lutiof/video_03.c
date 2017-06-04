#include <stdio.h>
#include <string.h>
#include <locale.h>
/* 
NOME: Angelo Alfredo Nunes Pereira RA: 2216112268
Nome: Bruno Henrique Pavão Inacio  RA: 2216203495
Nome: Lucio Flavio Nunes Pereira   RA: 2216112269
*/

int main () {

char deixa [100];
char rotina [100];
char recompensa [100];


setlocale (LC_ALL,"portuguese");

	
	
printf ("****Este programa tem como objetivo ajudar o usuario a criar um habito****\n\n");
printf ("Qual atividade você gostaria que virasse uma Rotina na sua vida?\n");
gets (rotina);
printf ("Tudo bem sua Rotina sera %s\n\n",rotina);

printf ("Agora precisamos criar uma deixa, escreva abaixo algo como um lugar ou até mesmo um objeto.\n");
gets (deixa);
printf ("Tudo bem sua deixa sera %s\n\n",deixa);

printf ("Para o habito se repetir precisamos criar uma recompensa afim de fixar a vontade de repetir o processo\n");
gets (recompensa);	

printf ("Então se você juntar deixa, rotina e a recompensa você tera o Loop do habito\n\n");
printf ("Começaremos com %s, e depois %s, assim chegaremos %s\n\n",deixa,rotina,recompensa);	
	
return 0;	
}
