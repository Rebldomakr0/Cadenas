/* buscar letra en una cadena, se utiliza indice para que la cadena se compare con un char */

#include <stdio.h>
#include <string.h>

int main(){
	int cont=0, tam;
	char palabra[100], letra;
	printf("de una palabra: ");
	gets(palabra);
	fflush(stdin);
	printf("Dame la letra: ");
	letra=getchar();
	fflush(stdin);
	tam=strlen(palabra); /* "tam" es un entero que permite calcular el total de letras utilizadas en la cadena. Si se usan menos de lo declarado (100 en este caso) */
	
	/* strlen: devuelve el numero de caracteres de loa cadena */
	
	for(int i=0; i<tam; i++){ /* Utilizamos un indice para el arreglo. palabra[i] ira recorriendo letra por letra dentro de la cadena */
		if(palabra[i]==letra){
			cont++; /* El contador declarado anteriormente aumenta por cada letra encontrada en la cadena */
		}
	}
	printf("La letra aparece %d veces", cont);
	
	return 0;
}
