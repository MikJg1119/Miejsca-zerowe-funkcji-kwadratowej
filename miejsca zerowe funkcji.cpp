#include <iostream>
#include <cmath>
using namespace std;
float a,b,c,d,x,x1,x2,x0;
void miejscazerowe ();
void liniowa();
int main()
{
	cout << "Program do obliczania miejsc zerowych funkcji kwadratowej i liniowej";



		   	cout << "\nPodaj wspolczynnik a = ";
			cin >> a;
			cout << "\nPodaj wspolczynnik b = ";
			cin >> b;
			cout << "\nPodaj wspolczynnik c = ";
			cin >> c;

liniowa();
}
void miejscazerowe(){
d=(b*b)-(4*a*c);
     if (d>=0) {
            x1=(-b-sqrt(d))/(2*a);

            x2=(-b+sqrt(d))/(2*a);
             cout << x1 << " " << x2<< endl;
        }
        else{
         cout << "Brak rzeczywistych miejsc zerowych" << endl;
        }
}

void liniowa(){
    if (a==0){
        x0 = (-c)/b;
        cout << x0 << endl;
    }
    else{
    miejscazerowe();
    }
}
