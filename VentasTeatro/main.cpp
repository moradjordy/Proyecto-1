#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <cstdio>

using namespace std;

int main() {
	
	
	char respuesta;
	
	char nombre[50]; 
	int tipocliente, cantidadtkts, cedula, tipotkt, montodeventa, descuento, tktswdescuento, impuesto, totalapagar;
	int tktgaleria = 6000;
	int tktpalco = 12000;
	int contadorfactura = 0;
	int tktsgaleria = 0;
	int tktspalco = 0;
	int generalentradas = 0;
	int sumatoriatotalesgaleria = 0;
	int sumatoriatotalpalco = 0;
	
	do {
	cout <<"\n******************Bienvenidos******************\n";
	cout <<"****************Teatro del Sol*****************\n";
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	cout << "Desea agregar una nueva venta? (S/N)\n";
	cin >> respuesta;
	
	if (respuesta == 's' || respuesta == 'S') {
	
	printf("Digite el nombre del comprador?\n");
	scanf("%s", &nombre);
	printf("Digite nuemro de cedula?\n");
	scanf("%i", &cedula);
	printf("Seleccione tipo de cliente. (1 o 2)?\n");
	printf("1-Nino/Adulto mayor.\n");
	printf("2-Adulto.\n");
	scanf("%i", &tipocliente);
		
		if (tipocliente == 1){
			
			printf("Digite cantidad de tiquetes a comprar?\n");
			scanf("%i", &cantidadtkts);
			printf("Selecciones tipo de tiquete a comprar. (1 o 2)\n");
			printf("1-Tiquete Galeria.\n");
			printf("2-Tiquete Palco.\n");
			scanf("%i", &tipotkt);
			
				switch (tipotkt){
				
					case 1:
						contadorfactura++;
						tktsgaleria++;
						generalentradas++;
						montodeventa = tktgaleria * cantidadtkts;
						printf("Monto de venta: %d\n", montodeventa);
						descuento = montodeventa * 0.30;
						tktswdescuento = montodeventa - descuento;
						printf("Descuento: %d\n", descuento);
						printf("Subtotal: %d", tktswdescuento);
						impuesto = tktswdescuento * 0.13;
						printf("Impuesto de venta: %d\n", impuesto);
						totalapagar = tktswdescuento + impuesto;
						printf("Total a pagar: %d\n ", totalapagar);
						printf("\n");
						printf("\n");
						printf("\n");
						printf("\n");
						printf("Numero de fatura: %d\n", contadorfactura);
						printf("Nombre: %s\n", nombre);
						printf("Numero de cedula: %d\n", cedula);
						printf("Tipo cliente: Nino/Adulto mayor\n");
						printf("Tipo de tiquete: Tipo galeria\n");
						printf("Cantidad de tiquetes comprados: %d\n", cantidadtkts);
						printf("Monto unitario por entrada: %d \n", tktgaleria);
						printf("Monto de venta: %d\n", montodeventa);
						printf("Descuento : %d\n", descuento);
						printf("Subtotal de venta: %d\n", tktswdescuento);
						printf("Impuesto: %d\n", impuesto);
						printf("Total a pagar: %d\n", totalapagar);
						sumatoriatotalesgaleria = sumatoriatotalesgaleria + totalapagar;
						
					break;
					
					case 2:
						contadorfactura++;
						tktspalco++;
						generalentradas++;
						montodeventa = tktpalco * cantidadtkts;
						printf("Monto de venta: %d\n", montodeventa);
						descuento = montodeventa * 0.30;
						tktswdescuento = montodeventa - descuento;
						printf("descuento: %d\n", descuento);
						printf("Subtotal: %d", tktswdescuento);
						impuesto = tktswdescuento * 0.13;
						printf("Impuesto de venta: %d\n", impuesto);
						totalapagar = tktswdescuento + impuesto;
						printf("Total a pagar: %d\n ", totalapagar);
						printf("\n");
						printf("\n");
						printf("\n");
						printf("\n");
						printf("Numero de fatura: %d\n", contadorfactura);
						printf("Nombre: %s\n", nombre);
						printf("Numero de cedula: %d\n", cedula);
						printf("Tipo cliente: Nino/Adulto mayor\n");
						printf("Tipo de tiquete: Tipo Palco\n");
						printf("Cantidad de tiquetes comprados: %d\n", cantidadtkts);
						printf("Monto unitario por entrada: %d \n", tktpalco);
						printf("Monto de venta: %d\n", montodeventa);
						printf("Descuento : %d\n", descuento);
						printf("Subtotal de venta: %d\n", tktswdescuento);
						printf("Impuesto: %d\n", impuesto);
						printf("Total a pagar: %d\n", totalapagar);
						sumatoriatotalpalco = sumatoriatotalpalco + totalapagar;
					break;
					default: 
						printf("Elija una opcion del menu.");
					break;
		
			}
		}else if (tipocliente == 2){
			
			printf("Cantidad de tkts");
			scanf("%i", &cantidadtkts);
			printf("tipo de tkts 1 o 2");
			scanf("%i", &tipotkt);
			
				switch (tipotkt){
				
					case 1:
						contadorfactura++;
						tktsgaleria++;
						generalentradas++;
						montodeventa = tktgaleria * cantidadtkts;
						printf("Monto de venta: %d\n", montodeventa);
						printf("Subtotal: %d\n", montodeventa);
						impuesto = montodeventa * 0.13;
						printf("Impuesto de venta: %d\n", impuesto);
						totalapagar = montodeventa + impuesto;
						printf("Total a pagar: %d\n ", totalapagar);
						printf("\n");
						printf("\n");
						printf("\n");
						printf("\n");
						printf("Numero de fatura: %d\n", contadorfactura);
						printf("Nombre: %s\n", nombre);
						printf("Numero de cedula: %d\n", cedula);
						printf("Tipo cliente: Adulto.\n");
						printf("Tipo de tiquete: Tipo galeria\n");
						printf("Cantidad de tiquetes comprados: %d\n", cantidadtkts);
						printf("Monto unitario por entrada: %d \n", tktgaleria);
						printf("Monto de venta: %d\n", montodeventa);
						printf("Subtotal de venta: %d\n", montodeventa);
						printf("Impuesto: %d\n", impuesto);
						printf("Total a pagar: %d\n", totalapagar);
						sumatoriatotalesgaleria = sumatoriatotalesgaleria + totalapagar;
					break;
					
					case 2:
						contadorfactura++;
						tktspalco++;
						generalentradas++;
						montodeventa = tktpalco * cantidadtkts;
						printf("Monto de venta: %d\n", montodeventa);
						printf("Subtotal: %d\n", montodeventa);
						impuesto = montodeventa * 0.13;
						printf("Impuesto de venta: %d\n", impuesto);
						totalapagar = montodeventa + impuesto;
						printf("Total a pagar: %d\n ", totalapagar);
						printf("\n");
						printf("\n");
						printf("\n");
						printf("\n");
						printf("Numero de fatura: %d\n", contadorfactura);
						printf("Nombre: %s\n", nombre);
						printf("Numero de cedula: %d\n", cedula);
						printf("Tipo cliente: Adulto.\n");
						printf("Tipo de tiquete: Tipo palco\n");
						printf("Cantidad de tiquetes comprados: %d\n", cantidadtkts);
						printf("Monto unitario por entrada: %d \n", tktpalco);
						printf("Monto de venta: %d\n", montodeventa);
						printf("Subtotal de venta: %d\n", montodeventa);
						printf("Impuesto: %d\n", impuesto);
						printf("Total a pagar: %d\n", totalapagar);
						sumatoriatotalpalco = sumatoriatotalpalco + totalapagar;
					break;
					default: 
						printf("Elija una opcion del menu.");
					break;	
				}
		
		}
	
}
} while (respuesta == 's' || respuesta == 'S');

	printf("Estadisticas\n");
	printf("Cantidad de entradas Tiquetes Galeria: %d\n", tktsgaleria);
	printf("Acumulado Dinero por Tiquetes Galeria: %d\n", sumatoriatotalesgaleria);
	printf("Cantidad de entradas Tiquetes Palco: %d\n", tktspalco);
	printf("Acumulado Dinero por Tiquetes Galeria: %d\n", sumatoriatotalpalco);
	printf("Cantidad General de Entradas: %d\n", generalentradas);
	printf("Acumulado General Dinero por Entradas: %d\n", sumatoriatotalesgaleria + sumatoriatotalpalco);
	
	return 0;
}
