#include <string>
using namespace std;

//Implementacion de la clase Dia anio

class Registro{
    //Atributos
    private:
        string idusuario,contrasena;

    //Metodos
    public:          //CONSTRUCTOR
        Registro()
        {
            idusuario = "\0";
            contrasena = "\0";
        };
        bool Ingresar();
};

    
