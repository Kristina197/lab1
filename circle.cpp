#include <iostream>
#include <math.h>

using namespace std;

void circle(int r, int corner)
{
    double pi = 2 * acos(0.0);
    double L = 2 * pi * r;
    cout << "Окружность радиусом = " << r <<"\n"
        << "Длина окружности: " << L << endl
        << "Площадь круга: " << pi* r * r << endl
        << "Площадь кругового сектора: " << pi * r * r * corner / 360 << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int r = 5, corner = 45;
    circle(r, corner);
}
