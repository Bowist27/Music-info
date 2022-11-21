#include <iostream>
#include "Registro.h"

using namespace std;

bool Registro::ingresardatos(Registro& d){
    if(idusuario ==d.dia && contrasena==d.mes){
        return true;
    }
    else{
        false;
    }
}