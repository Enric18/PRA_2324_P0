#include <iostream>
using namespace std;

class BrazoRobotico{
   private:
      double x;
      double y;
      double z;
      bool sujetando;
   public:
      BrazoRobotico(double x, double y, double  z, double sujetando);
      double getX;      
      double getY;
      double getZ;
      bool getSujetando;
      void coger();
      void soltar();
      void mover(double x, double y, double z);
      
};
