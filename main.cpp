/**Kevin Griffin
 * Lab Ex-4
 * Resistance of a wire function
 */

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main ();
//Global decalrations
double res(double radius, double length, double resistivity);

//main function
int main ()
{
    //locl declarations
    double radius=0, length=0, resistance=0, resistivity=0;
    //while loop prompts user to enter radius and stores it in memory location radius
    while (radius<=0)
    {
        cout<< "Enter a value for radius greater than 0: ";
        cin>> radius;
    }
    //While loop prompts user to enter value for length to be stored in length location
    while (length<=0)
    {
        cout<< "Enter a value for length greater than 0: ";
        cin>>length;
    }
    //same as length and radius but for resistivity
    while( resistivity<=0)
    {
        cout << "Enter a valu for resistivity greater than 0: ";
        cin>> resistivity;
    }
    //Equation to calculate the resistance of a wire
    resistance = res(radius, length, resistivity);
    //doisplays the resulting resistance value for the user
    cout << "Resistance of a wire: ohms" << resistance << endl;

    return 0;

}
//Function to be called to calculate the area and resistance of wire/
double res(double radius, double length, double resistivity)
{

    //local declarations
    double area, resistance;
    //equation to calculate the area
    area = M_PI * radius * radius;
    //equation to calculate the resistance
    resistance =  resistivity * length / area;

    //returns to the resistance equation
    return resistance;
}



