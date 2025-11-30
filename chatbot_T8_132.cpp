#include <iostream>
#include <string>

using namespace std;

    // ----------------------------------------------------------------------
    // Francisco Euan
    // ACTIVIDAD realizada:
    // - Crear la bienvenida del chatbot.
    // - Pedir el nombre del usuario con getline.
    // - Imprimir el saludo inicial.
    // ----------------------------------------------------------------------

int main() {
    string nombre;
    string opcion;
    bool continuar = true;

    cout << "Hola, soy el asistente virtual de Ofiexpress!!!" << endl;
    cout << "Por favor, ingresa tu nombre: ";
    getline(cin, nombre);

    cout << "\nMucho gusto, " << nombre << "." << endl;


    while (continuar) {

        // ----------------------------------------------------------------------
        // Yuridia Diego Cruz
        // ACTIVIDAD Realizada:
        // - Crear menu de opciones.
        // - Solicitar la entrada del usuario (getline).
        // - Mantener al usuario dentro del ciclo while.
        // ----------------------------------------------------------------------

        cout << "\n----------------------------------------" << endl;
        cout << "Por favor elige una opcion del menu:" << endl;
        cout << "1. Horario" << endl;
        cout << "2. Contacto" << endl;
        cout << "3. Servicios ofrecidos" << endl;
        cout << "4. Salir" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Introduce tu eleccion (numero o nombre): ";

        getline(cin, opcion);


        // ----------------------------------------------------------------------
        // GALAVIZ
        // ACTIVIDAD:
        // ----------------------------------------------------------------------

        if (opcion == "1" || opcion == "Horario" || opcion == "horario") {
            cout << "\n>> Nuestro horario de atencion es de lunes a viernes de 9:00 a 18:00." << endl;
        }
        else if (opcion == "2" || opcion == "Contacto" || opcion == "contacto") {
            cout << "\n>> Puedes comunicarte al telefono 55-1234-5678 o al correo ventas@ofiexpress.mx" << endl;
        }

        // ----------------------------------------------------------------------
        // SONIA
        // ACTIVIDAD:
        // ----------------------------------------------------------------------

        else if (opcion == "3" ||
                 opcion == "Servicios ofrecidos" ||
                 opcion == "servicios ofrecidos" ||
                 opcion == "Servicios" ||
                 opcion == "servicios") 
        {
            cout << "\n>> Ofrecemos venta y reparto de articulos de oficina para PyMEs." << endl;
        }
        else if (opcion != "4" && opcion != "Salir" && opcion != "salir") {
            cout << "\n>> Opcion no reconocida. Por favor intenta escribiendo el numero (ej: 1) o la palabra (ej: Horario)." << endl;
        }

        // ----------------------------------------------------------------------
        // JUAN ANTONIO
        // ACTIVIDAD:
        // ----------------------------------------------------------------------

        if (opcion == "4" || opcion == "Salir" || opcion == "salir") {
            cout << "\n>> Gracias por su preferencia, vuelva pronto a Ofiexpress" << endl;
            continuar = false;
        }
    }

    cout << "\n-- Chatbot finalizado correctamente --" << endl;

    return 0;
}

