#include <time.h>
#include <stdio.h>

void main(void){
	//Apenas para pegar as váriaveis da Struct como referência
	struct tm {
		int tm_sec; /*segundos 0-59*/
		int tm_min; /*minutos 0-59*/
		int tm_hour; /*horas 0-23*/
		int tm_mday; /*dia do mês, 1-31*/
		int tm_mon; /* meses a partir de jan 0-11*/
		int tm_year; /* anos a partir de jan 1900*/
		int tm_wday; /* dias a partir de domingo 0-6 */
		int tm_yday; /* dias a partir de 1 de jan / 0-365*/
		int tm_isdst; /*Indicador de horário de verão*/
	}tempo;
	time_t segundos;	
	struct tm *ptr; //ponteiro para a struct tm

	segundos = time(NULL); //retorna o número de segundos no formato Epoch
	ptr = (struct tm*) localtime(&segundos);// transforma o argumento em uma data feita pelo formato Epoch

	printf("%dh %dmin %ds\n", ptr->tm_hour, ptr->tm_min, ptr->tm_sec);
}
