// zdz_lambda_16_08_2023.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <memory>
#include <exception>

using namespace std;

template<typename T>
void dzialaj(void (*f)(T, T)) {
        f(2, 7);
    /*if (string(typeid(T).name()) != "int" && string(typeid(T).name) != "double")
        f(string("2"), string("7"));
    else
        f(2, 7);*/
}

class A {
public:
    int a, b;
};

double dziel(double a, double b) {
    try {
        if (b != 0)
            return a / b;
        else  throw 500;
    }
    catch (...) {
        cout << "WYSTĄPIŁ BŁĄD ";
      
    }
    return 0;
};

int main()
{
    double a, b;
    cin >> a >> b;
    
    try {
        cout << dziel(a, b);
        //cout << a / b;
    }
    catch (...) {
        cout << "Błąd ";
    }



    //inteligentgne wskaźniki

    /*unique_ptr<A> zmienna1(new A);
    unique_ptr<A> zmienna2;
    zmienna1.get()->b = -5;
    //zmienna1 = make_unique<double>(2);
    zmienna2 = move(zmienna1);
    zmienna2.get()->a = 12;
    
    //zmienna1.get()->b = 4;
    


    std::cout << zmienna2.get()->a << " " << zmienna2.get()->b << "\n";
    shared_ptr<A> zmienna3(new A);
    shared_ptr<A> zmienna4;
    zmienna3.get()->a = -9;
    zmienna4 = zmienna3;
    std::cout << zmienna3.get()->a << " " << zmienna4.get()->a << "\n";

    //weak_ptr<A> zmienna5;

    //zmienna5 = zmienna4;
    
    auto zmienna5 = -9;

    zmienna5 = 3;*/


    //używanie lambda ze wskaźnikam do funkcji + szablony typu zmiennych
    /*double a, b, c;
    cin >> a >> b >> c;

    cout << "Wynik wyrażenia lambda: " << [ = , &b ] { 
        //double a = 15;
        //double c = -5.6;
        b *= a;
        cout << c;
        return a*b; 
    } () << "\nb = " << b;*/
    //int a, b;

    //cin >> a >> b;
    /*dzialaj<int>([](int a, int b) {
        if (a * b > 8)
            std::cout << "DOBRZE\n";
        std::cout << a * b;  });

    dzialaj<double>([](double a, double b) {
        std::cout << a * 2.2 + b * 2.2;
    
        });
    std::cout << "\n\n\n";*/

//dzialaj<string>([](string a, string b) {
//    cout << "To są ciągi znakowe";
//    });

}