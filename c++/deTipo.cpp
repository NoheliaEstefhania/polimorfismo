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
    Gato(string, string, int);
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
  Perro mascota1();
  Gato mascota2();
  mascota1.comer(); 
  mascota2.comer();
  return 0;
}



