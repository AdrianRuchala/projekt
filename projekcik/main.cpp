#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int x;
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
    return 0;
}
