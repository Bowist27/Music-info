#include <iostream>
#include "Registro.h"
#include <sstream>

using namespace std;


bool Registro::Ingresar(){
    string _idusuario = "SI", _contrasena = "1";
    cout<<"Enter your User";
    cin>>idusuario;
    cout<<"Enter Password";
    cin>>contrasena;

    if(idusuario == _idusuario && _contrasena == contrasena)
    {
        return true;
    }
    else
    {
        return false;
    }

}
