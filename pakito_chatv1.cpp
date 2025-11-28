// =========================================================
// chatbot_pakitov1.cpp
// Chatbot OfiExpress - test 1
// Funcionalidad: decisiones según palabra clave (if - else if)
// =========================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;
    string opcion;
    bool continuar = true;

    // 1. Dar la bienvenida
    cout << "Hola, soy el asistente virtual de Ofiexpress!!!" << endl;

    // 2. Solicitar nombre
    cout << "Por favor, ingresa tu nombre: ";
    getline(cin, nombre); // Usamos getline para permitir nombres con espacios

    cout << "\nMucho gusto, " << nombre << "." << endl;

    // Ciclo para repetir el menú hasta que el usuario decida salir
    while (continuar) {
        // 3. Desplegar el menú de opciones
        cout << "\n----------------------------------------" << endl;
        cout << "Por favor selecciona una opcion:" << endl;
        cout << "1. Horario" << endl;
        cout << "2. Contacto" << endl;
        cout << "3. Servicios ofrecidos" << endl;
        cout << "4. Salir" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Escribe tu eleccion (numero o nombre): ";
        
        // Leemos la opción como texto para aceptar tanto números como palabras
        getline(cin, opcion);

        // Lógica para determinar la respuesta
        // Opción 1: Horario
        if (opcion == "1" || opcion == "Horario" || opcion == "horario") {
            cout << "\n>> Nuestro horario de atencion es de lunes a viernes de 9:00 a 18:00." << endl;
        }
        // Opción 2: Contacto
        else if (opcion == "2" || opcion == "Contacto" || opcion == "contacto") {
            cout << "\n>> Puedes comunicarte al telefono 55-1234-5678 o al correo ventas@ofiexpress.mx" << endl;
        }
        // Opción 3: Servicios
        else if (opcion == "3" || opcion == "Servicios ofrecidos" || opcion == "servicios ofrecidos" || opcion == "Servicios" || opcion == "servicios") {
            cout << "\n>> Ofrecemos venta y reparto de articulos de oficina para PyMEs." << endl;
        }
        // Opción 4: Salir
        else if (opcion == "4" || opcion == "Salir" || opcion == "salir") {
            cout << "\n>> Gracias por su preferencia, vuelva pronto a Ofiexpress" << endl;
            continuar = false; // Esto rompe el ciclo while
        }
        // Opción no válida
        else {
            cout << "\n>> Opcion no reconocida. Por favor intenta escribiendo el numero (ej: 1) o la palabra (ej: Horario)." << endl;
        }
    }

    return 0;
}
