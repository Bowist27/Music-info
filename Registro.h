#include <string>
using namespace std;

//Implementacion de la clase Dia anio

class Registro{
    //Atributos
    private:
        int idusuario,contrasena;

    //Metodos
    public:          //CONSTRUCTOR
        Registro(int _idusuario, int _contrasena){
            idusuario = _idusuario;
            contrasena = _contrasena;
        }

        int ingresardatos(Registro& d);   //Es objeto dinamico
        bool verificarlogin();
};
