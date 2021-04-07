/* programa para imprimir hello world usando openMP na linguagem C*/
#include <omp.h> //biblioteca openMP
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{

//imprimindo na região serial
printf("\tOla! ---- estou fora da regiao paralela ----- \n\n");

	//começo da região paralela (FORK)
	#pragma omp parallel num_threads(7) //obs: também podemos usar omp_set_num_threads(7) para definir o numero de threads
	{
	    //pegando o ID de cada thread
        int id= omp_get_thread_num();

        //pegando o número total de threads
        int n_Thread= omp_get_num_threads();

		if (id == 0){ //processo
		printf ("Hello World... sou a Master Thread (%d) dentro da regiao paralela\n", id);
		} else {
		printf("Hello World... sou a thread = %d de um total de %d \n", id, n_Thread);
		}

	} //FIM DA REGIÃO PARALELA (JOIN)

//imprimindo na região serial
printf("\n\tOla! ---- estou fora da regiao paralela ----- \n\n");


return 0;
}






