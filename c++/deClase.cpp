#include <iostream>
#include <stdio.h>

using namespace std;

class Mascota{
  private:
    string nombre;
    string raza;
  public:
    Mascota(string, string);
    void mostrarMascota();
};
class Perro: public Mascota{
  private:
    int edadP;
  public:
    Perro(string, string, int);
    void mostrarPerro();
};
class Gato: public Mascota{
  private:
    int edadG;
  public:
    Gato(string, string, int);
    void mostrarGato();
};

//constructores
Mascota::Mascota(string _nombre, string _raza){
  nombre = _nombre;
  raza = _raza;
}
Perro::Perro(string _nombre, string _raza, int _edadP):Mascota(_nombre, _raza){
  edadP = _edadP;
}
Gato::Gato(string _nombre, string _raza, int _edadG):Mascota(_nombre, _raza){
  edadG = _edadG;
}
//métodos

void Mascota::mostrarMascota(){
  cout<<"Mascota de nombre ("<<nombre<<") y raza ("<<raza<<")"<<endl;
}
void Perro::mostrarPerro(){
  mostrarMascota();
  cout<<"edad del perro ("<<edadP<<")"<<endl;
}
void Gato::mostrarGato(){
  mostrarMascota();
  cout<<"edad del gato ("<<edadG<<")"<<endl;
}
int main(){
  Perro mascota1("Shaggui", "Pastor Aleman", 15);
  Gato mascota2("Manchas", "fina", 25);
  mascota1.mostrarPerro(); 
  mascota2.mostrarGato();
  return 0;
}



