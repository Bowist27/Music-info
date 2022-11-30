#include "Cancion.h"
#include <sstream>

Cancion::Cancion(){
	nombre = "";
	duracion ="";
	puntuacion ="";
}

Cancion::Cancion(string _genero_musical, string _instrumento_recurrente,string _nombre, string _duracion, string _puntuacion, string _datoCurioso):GeneroMusical(_genero_musical,_instrumento_recurrente){
	nombre = _nombre;
	duracion = _duracion;
	puntuacion = _puntuacion;

	DatoCurioso datoCurioso_(_datoCurioso);
	datoCurioso = datoCurioso_;
}


//Setters
void Cancion::setNombre(string _nombre){
	nombre = _nombre;
}

void Cancion::setDuracion(string _duracion){
	duracion = _duracion;
}

void Cancion::setPuntuacion(string _puntuacion){
	puntuacion = _puntuacion;
}

//Getters
string Cancion::getNombre(){
	return nombre;
}

string Cancion::getDuracion(){
	return duracion;
}

string Cancion::getPuntuacion(){
	return puntuacion;
}

string Cancion::getCancionInfo(){
	stringstream aux;
	aux<<getGeneroMusicalInfo();
	aux<<"Nombre de la cancion: "<<nombre<<endl;
	aux<<"Duracion: "<<duracion<<endl;
	aux<<"Puntuacion: "<<puntuacion<<endl;
	aux<< datoCurioso.getDatoCuriosoInfo() <<endl;
	return aux.str();
}