#include <iostream>
#include "BrazoRobotico.h"
using namespace std;

int main(){
	BrazoRobotico brazo1(0, 0, 0, false);
	brazo1.mover(1, 2, 3);
	brazo1.coger();
}
