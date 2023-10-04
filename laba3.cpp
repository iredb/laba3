/****************************************************
 *  Автор:    Струк С.А.                            *
 *  Название: Программирование линейных алгоритмов. *
 *  https://onlinegdb.com/f2EZmR76J                 *
 ****************************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
  const double g = 980;
  double d1, l, d2, h, omega, hshtrih;
  
  cout << "d1 = ";
  cin >> d1;
  cout << endl << "l = ";
  cin >> l;
  cout << endl << "d2 = ";
  cin >> d2;
  
  cout.precision(3);
  cout << fixed;
  
  while (h <= 23) {
    cout << endl << "h = ";
    cin >> h;
    
    hshtrih = h - (1 - ( pow(d2, 2) / (2 * pow(d1, 2) ) ) ) * l;
    
    if (hshtrih < 0) {
      omega = (2 * l / d1) * sqrt(g / (h - (1 - ( pow(d2, 2) /  pow(d1, 2) ) ) * l) );
    } else if (hshtrih > 0) {
      omega = 4 * d1 * ( sqrt(g * (l - h) ) / pow(d2, 2) );
    }
    
    cout << endl << "omega = " << omega 
         << endl << "hshtrih = " << hshtrih;
  }
  
  return 0;
}
