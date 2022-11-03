#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int x;
    int z;
    cout<<"wybierz postac funkcji linowej: 1=postac kierunkowa, 2=postac ogolna"<<endl;
    cin>>z;
    switch (z)
    {
    case 1:
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
    case 2:
        cout<<"Podaj A: ";
        cin>>a;
        cout<<"Podaj B: ";
        cin>>b;
        cout<<"Podaj C: ";
        cin>>c;
        cout<<"Miejsce zerowe tej funkcji to: "<<a;
        break;
    }

    return 0;
}
