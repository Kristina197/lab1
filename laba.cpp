#include <iostream>
#include "rectangle.h"
using namespace std;
int main(){
  setlocale(LC_ALL,"RU");
  bool menuActive=1;
  int x=0;
  while (menuActive==1){
  cout << "Выберите геометрическую фигуру \n1) Прямоугольник \n2) Треугольник \n3) Трапеция \n4) Окружность \n5) Выход из программы \n\n";
  cin >> x;
    switch (x){
      case 1:
      double a,b;
        cout << "Введите первую сторону прямоугольника: ";
            cin >> a;
            cout << "\nВведите вторую сторону прямоугольника: ";
            cin >> b;
            cout << "Периметр прямоугольника равен: " << perimeter(a,b) << endl;
            cout << "Площадь прямоугольника равна: " << square(a,b) << endl;
            cout << "Длина диагонали равна: " << diagonal(a,b) << endl << endl;
      		break;
      case 2:
      		break;
      case 3:
      		break;
       case 4:
      		break;
      case 5:
      menuActive=0;
      		break;
      default:
      cout<< "Неверно выбран номер";
      break;
    }
  }
}
