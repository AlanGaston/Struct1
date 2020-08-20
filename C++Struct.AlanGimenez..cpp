#include <iostream>

using namespace std;

typedef struct pelicula{

float duracion;
bool buena_mala; 
string nombre;
}pelicula_t;



int main(){
    
    pelicula_t historia;
    std::cout << historia.buena_mala << std::endl;

    return 0;
}
