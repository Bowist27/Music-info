#include "GeneroMusical.h"


// Se crea metodo con texto vacio
GeneroMusical::GeneroMusical(){
    genero_musical="";
    instrumento_recurrente="";
}

//

GeneroMusical::GeneroMusical(string _genero_musical, string _instrumento_recurrente){
    genero_musical = _genero_musical;
    instrumento_recurrente = _instrumento_recurrente;
}

// Establezco mis setters
void GeneroMusical::setGeneroMusical(string _genero_musical){
    genero_musical = _genero_musical;
}

void GeneroMusical::setInstrumentoRecurrente(string _instrumento_recurrente){
    instrumento_recurrente = _instrumento_recurrente;
}


//Estos son los getters usados
string GeneroMusical::getGeneroMusical(){
    return genero_musical;
}

string GeneroMusical::getInstrumentoRecurrente(){
    return instrumento_recurrente;
}


string GeneroMusical::getGeneroMusicalInfo(){
	stringstream aux;
	aux<<"Tipo de genero musical: "<<genero_musical<<endl;
	aux<<"Instrumento Recurrente: "<<instrumento_recurrente<<endl;
	return aux.str();
}