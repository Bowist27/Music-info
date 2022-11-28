#include <windows.h>
#include <iostream>
#include "Registro.cpp"
#include "GeneroMusical.cpp"

//Se insertan solamente los .cpp ya que los .h ya traen los .h (Seria repeticion del mismo archivo)
#include "Album.cpp"
#include "Artista.cpp"
#include "Cancion.cpp"
#include "Archivo.h"

using namespace std;

int main(){
    //objetos hardcodeados
    // Mi proyecto es una biblioteca sobre musica la cual hace que cualqueir persona pueda ver toda la informacion que se posee dentro de esta misma
    
    
    //Hice una gran cantidad de objetos para poder usarlos despues en el desarrollo de mi proyecto
    // Estos 3 poseen herencia asi que tienen el genero musical y el instrumento_recurrente provenientes de Genero MusicaL
     // Recordemos el orden que se tenia en un inicio siendo (genero musical, instrumento_recurrente, fecha_lanzamiento, numero_canciones)
    Album album1("Rock","Guitarra Electrica","25 de Diciembre del 2018","20");
    Album album2("Rock","Guitarra Electrica","21 de Diciembre del 2018","20");
    Album album3("Rock","Guitarra Electrica","02 de Diciembre del 2018","20");
    Album album4("Rock","Guitarra Electrica","09 de Diciembre del 2018","25");
    Album album5("Rock","Guitarra Electrica","20 de Diciembre del 2018","20");
    Album album6("Rock","Guitarra Electrica","20 de Diciembre del 2018","20");
    Album album7("Rock","Guitarra Electrica","20 de Diciembre del 2018","20");
    Album album8("Rock","Guitarra Electrica","20 de Diciembre del 2018","20");
    Album album9("Rock","Guitarra Electrica","20 de Diciembre del 2018","20");
    Album album10("Rock","Guitarra Electrica","20 de Diciembre del 2018","20");
    
    // Recordemos el orden que se tenia en un inicio siendo (genero_musical, instrumento_recurrente, nombre, edad, popularidad, nacionalidad)
    Artista artista1("Urbano Latino","Voz","Raul Alejandro Ocasio Ruiz (Rauw)",29,"Estrella Internacional","Puerto Rico");
    Artista artista2("Pop","Voz","Rosalía Vila Tobella (Rosalia)",30,"Estrella Internacional","Mexico");
    Artista artista3("Rock","Guitarra Electrica","Richard Zven Kruspe",18,"Estrella Internacional","Alemania");
    Artista artista4("Banda","Voz","Christian Nodal",23,"Estrella Nacional","Mexico");
    Artista artista5("Rock","Guitarra Electrica","Benito",18,"Estrella Internacional","Mexicana");
    Artista artista6("Rock","Guitarra Electrica","Benito",18,"Estrella Internacional","Mexicana");
    Artista artista7("Rock","Guitarra Electrica","Benito",18,"Estrella Internacional","Mexicana");
    Artista artista8("Rock","Guitarra Electrica","Benito",18,"Estrella Internacional","Mexicana");
    Artista artista9("Rock","Guitarra Electrica","Benito",18,"Estrella Internacional","Mexicana");
    Artista artista10("Rock","Guitarra Electrica","Benito",18,"Estrella Internacional","Mexicana");

    // Recordemos el orden que se tenia en un inicio siendo (genero_musical, instrumento_recurrente, nombre, duracion y puntuacion)
    Cancion cancion1("Rock Alternativo","Guitarra","Llueve sobre la ciudad","3 Minutos con 56 segundos","5/5 Estrellas");
    Cancion cancion2("Rap","Teclado y Voz","Knocking Doorz Down","4 Minutos con 24 segundos","4/5 Estrellas");
    Cancion cancion3("Indie Rock","Bateria y Guitarra","505","4 Minutos con 13 segundos","4/5 Estrellas");
    Cancion cancion4("Pop Rock","Bateria y Guitarra","Te quiero","3 Minutos con 24 segundos","5/5 Estrellas");
    Cancion cancion5("Pop","Guitarra","Riptide","3 Minutos con 56 segundos","5/5 Estrellas");
    Cancion cancion6("Pop","Teclado","Shivers","3 Minutos con 27 segundos","5/5 Estrellas");
    Cancion cancion7("Rock Alternativo","Piano","This fffire","3 Minutos con 38 segundos","5/5 Estrellas");
    Cancion cancion8("Guaracha Electronica","Teclado","Pepas","4 Minutos con 47 segundos","4/5 Estrellas");
    Cancion cancion9("Reggaeton","Teclado y Efectos de sonido","Party","3 Minutos con 47 segundos","5/5 Estrellas");
    Cancion cancion10("Urbano","Teclado","Lejos del cielo","3 Minutos con 28 segundos","3/5 Estrellas");


    
    Cancion canciones[]={cancion1, cancion2, cancion3, cancion4, cancion5, cancion6, cancion7, cancion8, cancion9, cancion10};
    Artista artistas[]={artista1,artista2,artista3,artista4,artista5,artista6, artista7, artista8, artista9};
    Album albumes[]={album1,album2,album3,album4,album5,album6, album7, album8, album9, album10};

    //Aqui se hacen uso de un objeto llamado usuario 1 pata ver si es que si se ingresa correctamente la contrasena y el id del usuario en caso de que sea positivo dejara usar el sistema.
    Registro usuario1;
    bool condicion = usuario1.Ingresar();
    if(!condicion){
        cout<<"\n\tIntente de nuevo\n";
        return 1;
    }
    else{   //Declaro mi variable para escojer en mi  llamada eleccion
        
        cout<<"Bienvenido a la mejor biblioteca de música en este programa podras realizar las siguientes funciones: "<<endl;

        }





    while(true){
        
        int eleccion;
        cout<<"(1) Visitar Sala de Albumes \n(2) Visitar Sala de Canciones \n(3) Visitar Sala de Artistas \n(4) Diversidad en la musica?? \n(5) Salir \nElija la mejor opcion: ";
        cin>>eleccion;

        if(eleccion==1){ 
            cout<<"Bienvenido a la Primera zona de la Biblioteca Tec Musical";
            
            
            while(true){
                cout<<("Han habido muchos albumes a lo largo de la historia pero los mejores se encuentran aqui");
                cout<<"\n(1) Ver Albumes existentes \n(2) Registrar Albumes Nuevos\n(3) Datos Curiosos de albumes \n(4) Regresar al menu principal\nElegir opcion: ";
                cin>>eleccion;

                if(eleccion==1){
                    Album albumes[20]={album1,album2,album3,album4,album5,album6, album7, album8, album9, album10};
                    cout<<"\nEstos son todos los albumes subidos a la biblioteca hasta la fecha";
                    for(int contador=0;contador<20;contador++){ //Hasta un maximo de 20 albumes
                        {
                            cout<<albumes[contador].getAlbumInfo()<<endl; 
                        }
                    }
                    cout<<"\nPara regresar al pasillo principal seleccione una tecla...";
                    system("pause>STOP");



                }else if(eleccion==2){
                    Cancion canciones[]={cancion1, cancion2, cancion3, cancion4, cancion5, cancion6, cancion7, cancion8, cancion9, cancion10};
                    // Recordemos el orden que se tenia en un inicio siendo (genero musical, instrumento_recurrente, fecha_lanzamiento, numero_canciones)
    
                    for(int contador=0;contador<10;contador++){
                        {
                            cout<<albumes[contador].getAlbumInfo()<<endl;
                        }
                    } 
                    cout<<"\nPara regresar al pasillo principal seleccione una tecla...";
                    system("pause>STOP");
                    

                }else if(eleccion==3){
                    cout<<"\n Los mejores datos curiosos solo en el piso 3";

                
                }else if(eleccion==4){
                    cout<<"\n Gracias por visitar la sala de albumes 3";
                    break;
                }else{
                    cout<<"\nESCRIBA UNA OPCION CORRECTA"<<endl;
                }
            }

        }else if(eleccion==2){ 
            cout<<"Bienvenido a la Segunda zona de la Biblioteca Tec Musical";
            while(true){
                cout<<("\nNuestro catalogo de canciones se va expandiendo poco a poco!!!");
                cout<<"\n(1) Ver Canciones existentes \n(2) Registrar Nuevas Canciones\n(3) Datos Curiosos de Canciones \n(4) Salir de la biblioteca\nSeleccione aqui su opcion: ";
                cin>>eleccion;
                if(eleccion==1){
                    Cancion canciones[20]={cancion1, cancion2, cancion3, cancion4, cancion5, cancion6, cancion7, cancion8, cancion9, cancion10};
                    
                    for(int contador=0;contador<20;contador++){ //Hasta un maximo de 20 Canciones
                        {
                            cout<<canciones[contador].getCancionInfo()<<endl; 
                        }
                    }
                    cout<<"\nPara regresar al pasillo principal seleccione una tecla...";
                    system("pause>STOP");


                }else if(eleccion==2){
                     // Recordemos el orden que se tenia en un inicio siendo (genero musical, instrumento_recurrente, fecha_lanzamiento, numero_canciones)
                    for(int contador=0;contador<10;contador++){
                        cout<<albumes[contador].getAlbumInfo()<<endl;
                    }
                    
                    
                }else if(eleccion==3){
                    cout<<"\n Los mejores datos curiosos solo en el piso 3";


                }else if(eleccion==4){
                    cout<<"\n Gracias por visitar la sala de albumes 3";
                break;
            }   }

        }else if(eleccion==3){
        cout<<"Bienvenido a la tercera zona de la Biblioteca Tec Musical, aqui encontrarás a los mejores artistas, sin embargo estan separados por genero musical";
            while(true){
                cout<<("\nPor estos suelos caminaron estos grandes artistas!!!");
                cout<<"\n(1) Ver Artistas en el registro \n(2) Registrar nuevos Artistas\n(3) Datos Curiosos de Artistas :0 \n(4) Regresar al menu principal\nSeleccione aqui su opcion: ";
                cin>>eleccion;

                if (eleccion==1){
                    Artista artistas[20]={artista1, artista2, artista3, artista4, artista5, artista6, artista7, artista8, artista9, artista10};
                    
                    for(int contador=0;contador<20;contador++){ //Hasta un maximo de 20 Canciones
                        {
                            cout<<canciones[contador].getCancionInfo()<<endl; 
                        }
                    }
                    cout<<"\nPara regresar al pasillo principal seleccione una tecla...";
                    system("pause>STOP");
    
            
                }else if(eleccion==2){
                    for(int contador=0;contador<10;contador++){
                        {
                            cout<<albumes[contador].getAlbumInfo()<<endl;
                        }
                    }
                }else if(eleccion==3){
                cout<<"\n Los mejores datos curiosos solo en el piso 3";

                //Eleccion para salir del ciclo
                }else if(eleccion==4){
                    cout<<"\n Gracias por visitar la sala de albumes 3";
                break;


        }else if(eleccion==4){ 
            cout<<"Bienvenido, sabias que la musica tiene una gran diversidad???";

        }else if(eleccion==5){
            break;
        }}
    }
    return 0;
}}
