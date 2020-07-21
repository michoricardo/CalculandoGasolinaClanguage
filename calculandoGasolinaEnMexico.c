
#include <conio.h>
#include <stdio.h>

//declarando la funcion solamente con los tipos de valores que trabajaremos
double calculo(double, double);
double kilometros_viaje;
double litros_km;
double precioLitro = 20;
double pesos;
int main()
{
    printf("\n Bienvenido al calculador de precio de gasolina de Richi");
    printf( "\n Introduce el la distancia que viajarás en kilometros :" );
    scanf( "%lf", &kilometros_viaje );
    printf( "\n Introduce el rendimiento de tu auto en litros/km :" );
    scanf( "%lf", &litros_km );
    //llamar a la función con parámetros, aquí se ponen las variables reales
    calculo(kilometros_viaje,litros_km);
    printf( "\n Invertirás: %lf ", pesos);
    printf("Pesos mexicanos");
    getch(); /* Pausa */

    return 0;
}
//se declara una función con variables ejemplo solamente
double calculo(double a,double b)
{
    pesos = precioLitro*(a/b);
    return (pesos);

}