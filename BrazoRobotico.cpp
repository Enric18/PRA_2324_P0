#include <iostream>
#include "BrazoRobotico.h"
using namespace std;

BrazoRobotico::BrazoRobotico(double x, double y, double  z, bool  sujetando){
   this-> x = x;
   this-> y = y;
   this-> z = z;
   this-> sujetando = sujetando;
}
double BrazoRobotico::getX(){
   return x;
}	
double BrazoRobotico::getY(){
   return y;
}
double BrazoRobotico::getZ(){
   return z;
}
bool BrazoRobotico::getSujetando(){
   return sujetando;
}
void BrazoRobotico::coger(){
   sujetando = true;
   cout << "Objeto cogido\n";
}
void BrazoRobotico::soltar(){
   sujetando = false;
   cout << "Objeto soltado\n";
}
void BrazoRobotico::mover(double xx, double yy, double zz){
   cout << "Movido de " <<  x << ", " << y << ", " << z << " a " << xx << ", " << yy <<  ", " << zz << "\n";
   x = xx;
   y = yy;
   z = zz; 


}
