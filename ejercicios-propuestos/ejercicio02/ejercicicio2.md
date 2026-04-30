
2. Describir línea por línea lo que hace el siguiente programa

#include <iostream>
using namespace std;

int main() {
    int valor;
    cout << "Ingrese un numero: ";
    cin >> valor;

    int *puntero = &valor;

    cout << "Direccion de memoria: " << puntero << endl;
    cout << "Contenido en esa direccion: " << *puntero << endl;

    return 0;
}

-primero incoportamos las liberias o archivos de cabezara como iostream que es entrada y salida y y el using namespace std habilita el uso de espacio de nombres
-definimos la funcion principal llamado  main 
-Declaramos una variable entera (int) llamada valor
-luego muestra una salida con cout de ingrese un numero 
-usamos cin para leer el valor ingresado por consola y lo almacenamos en la variable valor
-Declaramos un puntero y le asignamos la dirrecion de memoria con el operador &valor
-Imprimos en consola la direccion de memoria que esta almacenado en el puntero en hexadecimal
-Me muestra el contenido va a la direccion y lo que encuentre se muestra por consola 
-finalizamos la ejecucion del main para que no retorne , devolviendo 0 en el sistema 


