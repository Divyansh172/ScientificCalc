#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalc
{
protected:
    float num1, num2;

public:
    int sum, difference, product;
    float div;
    void setInfo(float a, float b)
    {
        num1 = a;
        num2 = b;
    }
    void operations(float num1, float num2)
    {
        sum = num1 + num2;
        difference = num1 - num2;
        product = num1 * num2;
        div = float(num1 / num2);
    }
    void display()
    {
        cout << "The sum operation of Simple Calculator is: " << sum << endl;
        cout << "The multiply operation of Simple Calculator is: " << product << endl;
        cout << "The Substraction operation of Simple Calculator is: " << difference << endl;
        cout << "The Division operation of Simple Calculator is: " << div << endl;
    }
};
class ScientificCalc
{
protected:
    float num1, num2;

public:
    void setInfoSci(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    float sqrnum1, sqrnum2;
    float squrtnum1, sqertnum2;
    void operations2(float num1, float num2)
    {
        sqrnum1 = num1 * num1;
        sqrnum2 = num2 * num2;
        squrtnum1 = sqrt(num1);
        sqertnum2 = sqrt(num2);
    }
    void show()
    {
        cout << "The square operation for num1 Scientific Calculator is: " << sqrnum1 << endl;
        cout << "The square operation for num2 Scientific Calculator is: " << sqrnum2 << endl;
        cout << "The square root operation for num1 Scientific Calculator is: " << squrtnum1 << endl;
        cout << "The square root operation for num2 Scientific Calculator is: " << sqertnum2 << endl;
    }
};
class HybridCalc : public SimpleCalc, public ScientificCalc
{
public:
    void setData(int a, int b)
    {
        setInfo(a, b);
        operations(a, b);
        setInfoSci(a, b);
        operations2(a, b);
    }
    void Display()
    {
        display();
        show();
    }
};

int main()
{
    HybridCalc a;
    a.setData(25, 36);
    a.Display();

    return 0;
}