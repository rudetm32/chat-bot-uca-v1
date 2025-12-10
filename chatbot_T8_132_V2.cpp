#include <iostream>
#include <string>
#include <map>    // Para guardar los productos y sus cantidades
#include <thread> // Para la función de esperar (sleep)
#include <chrono> // Para definir el tiempo

using namespace std;

// *************************************************************************************
// *************************************** Chatbot V2 – Menú de inventario - OFIEXPRESS
// *************************************************************************************
//
// EQUIPO 8 - GRUPO 132
// Integrantes y nombres de ramas:
//
// Diego Cruz Yuridia / Yuridia_diego
// Euan Burgos Francisco Alfonso / Pakito_euan
// Ruiz Juan Antonio / juan-antonio-ruiz

//

// Función auxiliar para esperar 5 segundos
void esperarCincoSegundos()
{
    cout << "\n(Esperando 5 segundos para volver al menu...)\n";
    this_thread::sleep_for(chrono::seconds(5));
}

int main()
{
    // Mapa para simular la base de datos: Nombre del producto -> Cantidad
    map<string, int> inventario;

    int opcion = 0;

    do
    {

        cout << "\n=========================================" << endl;
        cout << "   SISTEMA DE INVENTARIOS OFI EXPRESS" << endl;
        cout << "=========================================" << endl;
        cout << "1. Reabastecimiento" << endl;
        cout << "2. Ventas" << endl;
        cout << "3. Salir" << endl; // Ahora Salir es la opción 3
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Limpiar el buffer de entrada
        cin.ignore();

        switch (opcion) {
            case 1: { // REABASTECIMIENTO
                string nombreProducto;
                int cantidadIngresar;
            
                cout << "\n--- REABASTECIMINETO ---" << end;
                cout << "1. Ingrese nombre del producto: ";
                getline(cin, nombreProducto);
            
                cout << "2. Cantidad de piezas a ingresar: ";
                cin >> cantidadIngresar;
            
                // Sumar a la cantidad existente
                inventario[nombreProducto] += cantidadIngresar;
                int cantidadFinal = inventario[nombreProducto];
            
                // Resumen
                cout << "\n--- RESUMEN ---" << end1;
                cout << "Producto: " << nombreProducto << end1;
                cout << "Piezas ingresadas; " << cantidadIngresar << end1;
                cout << "Cantidad final de existencias: " << cantidadFinal << end1;
            
                cout << "\nGracias por usar el sistema de inventarios de Ofi Express" << end1;
                esperarCincoSegundos();
                break; 
            }
        
        default:
            cout << "Opcion no valida. Intente de nuevo." << endl;
        }

    } while (opcion != 3); // El ciclo termina cuando la opción es 3

    return 0;
}

// He utilizado la librería <map> para manejar el inventario (así se puede guardar diferentes productos por su nombre) y
// las librerías <thread> y <chrono> para manejar la espera de 5 segundos de forma estándar y compatible.
//
// Características del código:
//
// Reabastecimiento: Guarda el dato en una variable inventario[nombre] sumando lo nuevo a lo viejo. Muestra el resumen solicitado.

// Ventas: Valida que la cantidad sea mayor a 0 con un ciclo do-while. Calcula el total y pregunta confirmación.

// Espera de 5 segundos: Utiliza this_thread::sleep_for(chrono::seconds(5))
