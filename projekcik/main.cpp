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
    int l;
    int o;
    int p;
    int q;
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
        cout<<"wybierz postac funkcji kwadratowe: 1=postac ogolna, 2=postac kanoniczna"<<endl;
        cin>>l;
        switch (l)
    {
    case 1:
        cout<<"Podaj a: ";
        cin>>a;
        cout<<"Podaj b: ";
        cin>>b;
        cout<<"Podaj c: ";
        cin>>c;
        int delta;
        int x1;
        int x2;
        if (a==0){                      //jezeli a=0
            if (b==0 && c==0)
            {
                x1=0;
                cout<<"Miejsce zerowe tej funkcji to: "<<x1;
            }else if (b==0 && c!=0)
            {
                cout<<"Funkcja nie ma miejsc zerowych";
            }else
            {
            x1=-c/b;
            cout<<"Miejsce zerowe tej funkcji to: "<<x1;
            }
        }else{
        delta=(b*b)-(4*(a*c));
        if (delta>0)
        {
            x1=(-b-sqrt(delta))/2*a;
            x2=(-b+sqrt(delta))/2*a;
            cout<<"Miejsca zerowe tej funkcji to: x1= "<<x1<<", x2= "<<x2;
        }else if (delta==0)
        {
            x1=(-b)/2*a;
            cout<<"Miejscem zerowym tej funkcji jest: x1= "<<x1;
        }else if (delta<0)
        {
            cout<<"Brak miejsc zerowych";
        }
        break;
    case 2:
        cout<<"Podaj a: ";
        cin>>a;
        cout<<"Podaj p: ";
        cin>>p;
        cout<<"Podaj q: ";
        cin>>q;
        b=-((2*a)*p);
        delta=-((4*a)*q);
        if(delta>0)
        {
            x1=(-b-sqrt(delta))/2*a;
            x2=(-b+sqrt(delta))/2*a;
            cout<<"Miejsca zerowe tej funkcji to: x1= "<<x1<<", x2= "<<x2;
        }else if (delta==0)
        {
            x1=(-b)/2*a;
            cout<<"Miejscem zerowym tej funkcji jest: x1= "<<x1;
        }else if (delta<0)
        {
            cout<<"Brak miejsc zerowych";
        }
        break;
        }
        }
        }



    return 0;
}
