#include <iostream>
#include <fstream>

using namespace std;

void generarTxt();

void generarTxt(){
    string nombreArchivo = "texto.txt";
    string contenido = "hola";
    
    ofstream archivo(nombreArchivo);  // No se necesita c_str() en C++11 y posteriores
    
    if (!archivo.is_open()){
        cerr << "Error al abrir el archivo" << endl;
        return;
    }
    
    archivo << contenido;
    archivo.close();
    cout << "Archivo Generado" << endl;
}

int main(){
    generarTxt();
    return 0;
}

