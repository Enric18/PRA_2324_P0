#include <iostream>
using namespace std;

BrazoRobotico::BrazoRobotico(double x, double y, double  z, double sujetando){
   this-> x = x;
   this-> y = y;
   this-> z = z;
   this-> sujetando = sujetando;
}
BrazoRobotico::double getX{
   return x;
}	
double getY{
   return y;
}
double getZ{
   return z;
}
bool getSujetando{
   return sujetando;
}
void coger(){
   sujetando = true;
}
void soltar(){
   sujetando = false;
}
void mover(double xx, double yy, double zz);
   x = xx;
   y = yy;
   z = zz; 
}
