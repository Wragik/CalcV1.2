// Calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
using namespace std;
class Uno
{
protected:
    double a, b,g, o;
    string z;
public:
    bool Memory();
    void Signs();
    double GetA()
    {
        return a;
    }
    void SetA(double a)
    {
        this->a = a;
    }
    double GetB()
    {
        return a;
    }
    void SetB(double b)
    {
        this->b = b;
    }
    string GetZ()
    {
        return z;
    }
    void SetZ(string z)
    {
        this->z = z;
    }
    double Getg()
    {
        return g;
    }
};
void Uno::Signs()
{

    if (z == "+")
    {
        g = a + b;
        printf("Ответ:%.4f", g);
        return;
    }
    if (z == "-")
    {
        g = a - b;
        printf("Ответ:%.4f", g);
        return;
    }
    if (z == "/")
    {
        g = a / b;
        if (b == 0)
        {
            cout << "Ошибка, на ноль делить нельзя";
            exit(1);
        }
        printf("Ответ:%.4f", g);
        return;
    }
    if (z == "*")
    {
        g = a * b;
        printf("Ответ:%.4f", g);
        return;
    }
    cout << "Ошибка";
}
bool Uno::Memory()
{
    bool f;
    cout << "\nЗапоминать значение или нет \n" << "Да - нажмите <1>, Нет - нажмите <0> ";
    cin >> f;
    o = g;
    return f;
}
int main()
{
    setlocale(LC_ALL, "rus");
    double a, b;
    string c;
    Uno u;
    cout << "Введите первое число ";
    cin >> a;
    u.SetA(a);
    cout << "Введите второе число ";
    cin >> b;
    u.SetB(b);
    cout << "Введите арифметическое действие " << "\n";
    cout << "сложение +, вычитание -, умножение *, деление / \n";
    cin >> c;
    u.SetZ(c);
    u.Signs();
    
}

