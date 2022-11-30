#ifndef ARTISTA
#define ARTISTA

#include "GeneroMusical.h"
#include "DatoCurioso.cpp"

#include <iostream>

#include <string>
#include <sstream>

//Herencia
class Artista:public GeneroMusical{
    private:
        string nombre, popularidad, nacionalidad;
        int edad;

        DatoCurioso datoCurioso;

    public:
        Artista();
          // (genero_musical,instrumento_recurrente, nombre,edad,popularidad,nacionalidad, datoCurioso)
        Artista(string,string, string,int,string,string, string);

        // Setters
        void setNombre(string);
        void setEdad(int);
        void setPopularidad(string);
        void setNacionalidad(string);

        // Viene de datoCurioso
        void agregaDatoCurioso(DatoCurioso,string);

        string getNombre();
        int getEdad();
        string getPopularidad();
        string getNacionalidad();
        
        // Super string que se va a usar
        string getArtistaInfo ();
};
#endif
