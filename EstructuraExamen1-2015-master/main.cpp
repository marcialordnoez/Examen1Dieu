#include "Evaluador.h"
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

//Devuele la suma de todos los elementos de mi_pila (dado) y mi_cola (dado)
float sumarElementos(stack<float> mi_pila, queue<float> mi_cola)
{
       float suma_pila = 0;
       float suma_cola = 0;
while(!mi_cola.empty())
{
    suma_cola += mi_cola.front();
    mi_cola.pop();
}
while(!mi_pila.empty())
{
    suma_pila += mi_pila.top();
    mi_pila.pop();
}
    return suma_cola + suma_pila;
}

//Devuelve true si mi_vector (dado) tiene valores repetidos
bool existenRepetidos(vector<string> mi_vector)
{

    return false;
}

//Devuelve la cantidad de elementos en edades (dado) que son mayores o iguales que 18
int contarMayoresDeEdad(list<int>edades)
{
//    for(list<int>:: iterator it= edades.begin(); it!= edades.end(); it++)
//        {
//            if(*it >= 18)
//                {
//                    it=edades.front();
//                    it++;
//                }
//            edades.pop_front();
//        }
    return 1;
}

//Devolver el un mapa con los siguientes valores dados en la tabla
//   LLave      |   Valor
//----------------------------
//  "Lolo"      |   98923212
//  "Lola""     |   92123243
//  "Rufo"      |   93212322
//  "Punpun"    |   99321273
//  "Ponpon"    |   92133243
map<string,int> obtenerAgenda()
{
    map<string,int> agenda;
      agenda["Lolo"]=98923212;
      agenda["Lola"]=92123243;
      agenda["Rufo"]=93212322;
      agenda["Punpun"]=99321273;
      agenda["Ponpon"]=92133243;
    return agenda;
}

//Devuelve el numero menor en mi_set (dado)
double obtenerMenor(set<double> mi_set)
{
//    for(set<double>:: iterator it= mi_set.begin(); it!= mi_set.end(); it++)
//    {
//        if(*it==)
//            {
//                cout<<"devuelve el mayor:" + *it<<endl;
//            }
//    }
//    return mi_set;
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
