#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <cstdio>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool esPrimo(int numero) {                        
if (numero <= 1) return false;
for (int i = 2; i * i <= numero; i++) {
if (numero % i == 0) return false;
}     
return true;
}

int main() {
	int numero;
	int mayorNumero = 0;
	int posMayorNumero = 0;
	int contadorPrimos = 0;
	int sumatoriaPrimos = 0;
	int contadorNoPrimos = 0;
	int sumatoriaNoPrimos = 0;
	int posicion = 1;
	int promedioPrimos = 0;
	int promedioNoPrimos = 0;
	char respuesta;
 
do{
	printf("\nBienvenidos digite un numero entero:  ");
	scanf("%i", &numero);
 
	if(esPrimo(numero)){
		printf("\nEl numero %i es un numero primo.", numero);
		contadorPrimos++;
		sumatoriaPrimos += numero;
	} else {
		printf("El numero %i no es primo.", numero);
		contadorNoPrimos++;
		sumatoriaNoPrimos += numero;
	}
	if (numero > mayorNumero) {
		mayorNumero = numero;
		posMayorNumero = posicion;
	}
	posicion++;
		printf("\nDesea ingresar otro numero? (s/n): ");
		respuesta = getch();
		
	}while (respuesta == 's'|| respuesta == 'S');
	promedioPrimos = sumatoriaPrimos / contadorPrimos;
	promedioNoPrimos = sumatoriaNoPrimos / contadorNoPrimos;
	printf("\nEstadisticas: \n");
	printf("Numero mayor ingresado: %d en la posicion %d\n", mayorNumero, posMayorNumero);
	printf("Cantidad numeros primos: %d\n", contadorPrimos);
	printf("Sumatoria de los numeros primos: %d\n", sumatoriaPrimos);
	printf("Promedio de los numeros primos: %d\n", promedioPrimos);
	printf("Cantidad numeros no primos: %d\n", contadorNoPrimos);
	printf("Sumatoria de los numeros no primos: %d\n", sumatoriaNoPrimos);
	printf("Promedio de los numeros no primos: %d\n", promedioNoPrimos);
	return 0;
}
