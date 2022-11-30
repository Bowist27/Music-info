#ifndef ALBUM
#define ALBUM

#include "GeneroMusical.h"
#include "DatoCurioso.cpp"

#include <iostream>
#include <string>

//Herencia
class Album:public GeneroMusical{
    private:
        string fecha_lanzamiento, numero_canciones;

        DatoCurioso datoCurioso;

    public:
        Album();
        // (genero_musical,instrumento recurrente, fecha_lanzamiento,numero_canciones, datoCurioso)
        Album(string,string, string,string, string);

        // Setters
        void setFechaLanzamiento(string);
        void setNumeroCanciones(string);

        // Viene de datoCurioso
        void agregaDatoCurioso(DatoCurioso,string);

        string getFechaLanzamiento();
        string getNumeroCanciones();

        // Super string que se va a usar
        string getAlbumInfo ();
};
#endif
