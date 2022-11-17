#include <iostream>
#include <stdio.h>

using namespace std;

class Mascota{
  private:
    string nombre;
    string raza;
  public:
    Mascota(string, string);
    virtual void mostrarMascota();
};
class Perro: public Mascota{
  private:
    int edadP;
  public:
    Perro(string, string, int);
    void mostrarMascota();
};
class Gato: public Mascota{
  private:
    int edadG;
  public:
    Gato(string, string, int);
    void mostrarMascota();
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
void Perro::mostrarMascota(){
  Mascota::mostrarMascota();
  cout<<"edad del perro ("<<edadP<<")"<<endl;
}
void Gato::mostrarMascota(){
  Mascota::mostrarMascota();
  cout<<"edad del gato ("<<edadG<<")"<<endl;
}
int main(){
  Mascota *perro1 = new Perro("Shaggui", "Pastor Aleman", 25);
  Mascota *gato1 = new Gato("Manchas", "x", 35);
  perro1->mostrarMascota(); 
  gato1->mostrarMascota();
  //delete mascota1;
  //delete mascota2;
  return 0;
}



