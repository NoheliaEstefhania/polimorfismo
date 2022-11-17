#include <iostream>
#include <stdio.h>

using namespace std;

class Mascota{
  public:
    virtual void comer();
};
class Perro: public Mascota{
    void comer();
};
class Gato: public Mascota{
  public:
    void comer();
};

void Mascota::comer(){
  cout<<"Mascota comiendo"<<endl;
}
void Perro::comer(){
  Mascota::comer();
  cout<<"perro comiendo"<<endl;
}
void Gato::comer(){
  Mascota::comer();
  cout<<"gato comiendo"<<endl;
}
int main(){
  Mascota *mascota1 = new Perro();
  Mascota *mascota2 = new Gato();
  mascota1->comer(); 
  mascota2->comer();
  //delete mascota1;
  //delete mascota2;
  return 0;
}



