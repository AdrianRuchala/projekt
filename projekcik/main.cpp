#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int x;
    int z;
    int o;
    cout<<"wybierz funkcje: 1=liniowa, 2=kwadratowa"<<endl;
    cin>>o;
    switch (o)
    {
    case 1:         //liniowa
        cout<<"wybierz postac funkcji linowej: 1=postac kierunkowa, 2=postac ogolna"<<endl;
        cin>>z;
        switch (z)
        {
    case 1:      //liniowa kierunkowa
            cout<<"Podaj a: ";
            cin>>a;
            cout<<"Podaj b: ";
            cin>>b;
            if (a==0 && b==0)
            {
                x=0;
                cout<<"Miejsce zerowe tej funkcji to: "<<x;
            }else if (a==0 && b!=0)
            {
                cout<<"Funkcja nie ma miejsc zerowych";
            }else
            {
            x=-b/a;
            cout<<"Miejsce zerowe tej funkcji to: "<<x;
            }
            break;
        case 2:         //liniowa ogolna
            cout<<"Podaj A: ";
            cin>>a;
            cout<<"Podaj B: ";
            cin>>b;
            cout<<"Podaj C: ";
            cin>>c;
            cout<<"Miejsce zerowe tej funkcji to: "<<a;
            break;
        }
        break;
    case 2:     //kwadratowa
        cout<<"Podaj a: ";
        cin>>a;
        cout<<"Podaj b: ";
        cin>>b;
        cout<<"Podaj c: ";
        cin>>c;
        int delta;
        int x1;
        int x2;
        delta=(b*b)-(4*(a*c));
        x1=(-b-sqrt(delta))/2*a;
        x2=(-b+sqrt(delta))/2*a;
        cout<<"Miejsca zerowe tej funkcji to: x1= "<<x1<<", x2= "<<x2;
        break;
        }


    return 0;
}
