// Scott 2018

#include <iostream>

using namespace std;

int main()
{
    // Circumference calculator

    float radius;
    cout << "What is the radius? If they give you a diameter, divide it by 2: ";
    cin >> radius;


    float diameter = radius*2;
    cout << "You're diameter is: " << diameter << endl;
    

    double pi = 3.14159;
    float Circumference = (pi*diameter);
    cout << "You're Circumference is: " << Circumference << endl;
    
    return 0;
}