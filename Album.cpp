#include "Album.h"
#include <sstream>

using namespace std;

Album::Album(){
	fecha_lanzamiento="";
	numero_canciones="";
}

Album::Album(string _genero_musical, string _instrumento_recurrente, string _fecha_lanzamiento, string _numero_canciones, string _datoCurioso):GeneroMusical(_genero_musical,_instrumento_recurrente){
	fecha_lanzamiento = _fecha_lanzamiento;
	numero_canciones = _numero_canciones;

	DatoCurioso datoCurioso_(_datoCurioso);
	datoCurioso = datoCurioso_;

}




// Setters
void Album::setFechaLanzamiento(string _fecha_lanzamiento){
	fecha_lanzamiento = _fecha_lanzamiento;
}

void Album::setNumeroCanciones(string _numero_canciones){
	numero_canciones = _numero_canciones;
}


//Getters
string Album::getFechaLanzamiento(){
	return fecha_lanzamiento;
}

string Album::getNumeroCanciones(){
	return numero_canciones;
}


string Album::getAlbumInfo(){
	stringstream aux;
	aux<<"Genero Musical e instrumento recurrente" <<getGeneroMusicalInfo();
	aux<<"Fecha de lanzamiento: "<<fecha_lanzamiento<<endl;
	aux<<"Numero de Canciones: "<<numero_canciones<<endl;
	
	// Se busca relacion de composicion
	aux<<datoCurioso.getDatoCuriosoInfo();

	return aux.str();
}