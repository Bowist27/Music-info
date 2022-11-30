#include <sstream>
#include "DatoCurioso.h"

DatoCurioso::DatoCurioso(){
    datoCurioso="";
}

DatoCurioso::DatoCurioso(string _datoCurioso){
    datoCurioso = _datoCurioso;
} 

string DatoCurioso::getDatoCuriosoInfo(){
    stringstream aux;
    aux << "Dato Curioso: " << datoCurioso << endl;
    return aux.str();
}