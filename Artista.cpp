#include "Artista.h"
#include <sstream>

Artista::Artista(){
	nombre="";
	edad = 0;
	popularidad="";
	nacionalidad="";
}


Artista::Artista(string _genero_musical, string _instrumento_recurrente, string _nombre, int _edad, string _popularidad, string _nacionalidad, string _datoCurioso):GeneroMusical(_genero_musical,_instrumento_recurrente){
	nombre = _nombre;
	edad = _edad;
	popularidad = _popularidad;
	nacionalidad = _nacionalidad;
	
	DatoCurioso datoCurioso_(_datoCurioso);
	datoCurioso = datoCurioso_;
}


// Setters
void Artista::setNombre(string _nombre){
	nombre = _nombre;
}

void Artista::setEdad(int _edad){
	edad = _edad;
}

void Artista::setPopularidad(string _popularidad){
	popularidad = _popularidad;
}

void Artista::setNacionalidad(string _nacionalidad){
	nacionalidad = _nacionalidad;
}

//Getters
string Artista::getNombre (){
	return nombre;
}

int Artista::getEdad (){
	return edad;
}

string Artista::getPopularidad (){
	return popularidad;
}

string Artista::getNacionalidad (){
	return nacionalidad;
}

string Artista::getArtistaInfo(){
	stringstream aux;
	aux<<"Genero Musical e instrumento recurrente " << getGeneroMusicalInfo();
	aux<<"Nombre: "<<nombre<<endl;
	aux<<"Edad: "<<edad<<endl;
	aux<<"Popularidad: "<<popularidad<<endl;
	aux<<"Nacionalidad: "<<nacionalidad<<endl;
	// Se busca relacion de composicion
	aux<<"Dato Curioso"<<datoCurioso.getDatoCuriosoInfo();

	return aux.str();
}