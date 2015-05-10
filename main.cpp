#include "Evaluador.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
    int valor = *ptr;//desrefencion *ptr
    return valor;//devuelvo su valor
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    int num1 = *a;//desreferencio la variable *a
    int num2 = *b;//desreferencio la variable *b
    return num1 + num2;//devuelve la suma de los 2 numeros
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
    if(&a == &b)//evalua si la direccin de memoria son iguales
        return true;//si se cumple es que apuntan al mismo lugar
}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    string aa = *a;//desreferencio la variable *a
    string bb = *b;//desreferencio la variable *b
    if(aa == bb)//evalua si son iguales
        return true;//si es asi devuelve true
    else
        return false;//si no es asi devuelve false
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{
    string palabra = *a;////desreferencio la variable *a
    return palabra[0];//retorna la primera letra de la palabra
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{
    string word = *a;//desreferencia la variable *a
    string letra;//variable para ir extrayendo cada letra de la palabra
    string palabra;//variable para almenar la palabra al reves
    int l = word.size();//almacena la longitud de la palabra
    int i=0;
    for(i=l;i>=0;i--)
    {
        letra = word.substr(i,1);//estre cada letra de la palabra empezando desde la ultima a la primera
        palabra = palabra + letra;//concatena cada letra alreves y forma la palabra alreves
    }
    if(palabra == word)//evalua si la palabra alreves es igual a la palabra original
            return true;//si se cumple la condicion es palindromo
    else
            return false;//sino se cumple no es palindromo
}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
    int base2 = *base;//desreferencia la variable *base
    int exp = *exponente;//desreferencia la variable /exponente
    int numero = 1;//variable para obtener el total
    for(int i=0; i<exp;i++)
    {
        numero = numero * base2;//multiplica el numero por si mismo tantas veces como diaga el exponente
    }
    return numero;//retorna el total
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
