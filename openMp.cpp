/* programa para imprimir hello world usando openMP na linguagem C*/
#include <omp.h> //biblioteca openMP
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{

//imprimindo na regi�o serial
printf("\tOla! ---- estou fora da regiao paralela ----- \n\n");

	//come�o da regi�o paralela (FORK)
	#pragma omp parallel num_threads(7) //obs: tamb�m podemos usar omp_set_num_threads(7) para definir o numero de threads
	{
	    //pegando o ID de cada thread
        int id= omp_get_thread_num();

        //pegando o n�mero total de threads
        int n_Thread= omp_get_num_threads();

		if (id == 0){ //processo
		printf ("Hello World... sou a Master Thread (%d) dentro da regiao paralela\n", id);
		} else {
		printf("Hello World... sou a thread = %d de um total de %d \n", id, n_Thread);
		}

	} //FIM DA REGI�O PARALELA (JOIN)

//imprimindo na regi�o serial
printf("\n\tOla! ---- estou fora da regiao paralela ----- \n\n");


return 0;
}






