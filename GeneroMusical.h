#ifndef GENEROMUSICAL
#define GENEROMUSICAL
#include "string.h"
using namespace std;

class GeneroMusical{
    private:
        string genero_musical, instrumento_recurrente;

    public: 
        GeneroMusical();
        GeneroMusical(string, string); 

        void setGeneroMusical(string);
        void setInstrumentoRecurrente(string);

        string getGeneroMusical();
        string getInstrumentoRecurrente();

        
        string getGeneroMusicalInfo();

};
#endif