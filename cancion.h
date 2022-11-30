#ifndef CANCION
#define CANCION

#include "GeneroMusical.h"
#include "DatoCurioso.cpp"

#include <iostream>

#include <string>
#include <sstream>

//Herencia
class Cancion:public GeneroMusical{
    private:
        string nombre, duracion, puntuacion;
        DatoCurioso datoCurioso;

    public:
        Cancion();
        // (genero_musical,instrumento_recurrente, nombre,duracion,puntuacion, datocurioso )
        Cancion(string,string, string,string,string, string);
    
        // Setters
        void setNombre(string);
        void setDuracion(string);
        void setPuntuacion(string);

        // Viene de datoCurioso
        void agregaDatoCurioso(DatoCurioso,string);
        
        string getNombre();
        string getDuracion();
        string getPuntuacion();

        // Super string que se va a usar
        string getCancionInfo();
        
        
};
#endif
