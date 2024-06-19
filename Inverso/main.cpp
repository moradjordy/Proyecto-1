#include <iostream>
#include <stdio.h>
#include <conio.h>
int main() {	
	int numero, inverso, resto;
	char continuar;
	do {
		printf("Ingrese un numero entero (Maximo 5 digitos): ");
		scanf("%d", &numero);
		if (numero < 0 || numero > 99999) {
			printf("Numero fuera de rango. Intente de nuevo.\n");
			continue;
		}	
		inverso = 0;
		int temporal = numero;
		while (temporal != 0) {
			resto = temporal % 10;
			inverso = inverso * 10 + resto;
			temporal /= 10;
		}
		printf("Numero ingresado: %d\n", numero);
		printf("Numero inverso: %d\n", inverso);	
		printf("Desea ingresar otro numero?(s/n): ");
		scanf(" %c", &continuar);
	} while (continuar == 's' || continuar == 'S');

	return 0;
}
