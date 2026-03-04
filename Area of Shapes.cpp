#include <iostream>
#include <math.h>


using namespace std;


int main()
{
	float length;
	float width;
	float height;
	float base;
	float side;
	float radius;
	float half = .50f;
	float π = 3.14159f;
	double area;
	string userInput;
	bool quit = false;
	

	while (!(quit)) 
	{
		

		cout << "Would you like to calculate a Rectangle, Square, Triangle, Circle, Parallelogram, or a Trapezoid? Or would you like to end?" << endl;
		cin >> userInput;
		

		if (userInput == "rectangle" || userInput == "Rectangle")
		{
			cout << "Please type in the length a Rectangle." << endl;
			cin >> length;
			cin >> width;
			area = length * width;
			cout << area << " " << endl;
		}
		else if (userInput == "square" || userInput == "Square")
		{
			cout << "Please input the vaule for a Square." << endl;
			cin >> side;
			area = pow(side, 2.0);
			cout << area << " " << endl;
		}
		else if (userInput == "triangle" || userInput == "Triangle")
		{
			cout << "Please input the vaules for a Triangle." << endl;
			cin >> base;
			cin >> height;
			area = half * base * height;
			cout << area << " " << endl;
		}
		else if (userInput == "circle" || userInput == "Circle")
		{
			cout << "Please input the vaules for a Circle." << endl;
			cin >> radius;
			area = π * pow(radius, 2.0);
			cout << area << " " << endl;
		}
		else if (userInput == "parallelogram" || userInput == "Parallloegram")
		{
			cout << "Please can you input your vaules for a Parallelogram" << endl;
			cin >> base;
			cin >> height;
			area = base * height;
			cout << area << " " << endl;
		}
		else if (userInput == "trapezoid" || userInput == "Trapezoid")
		{
			cout << "Please input the vaules for trapezoid" << endl;
			cin >> length;
			cin >> width;
			cin >> height;
			area = (length + width) / 2 * height;
			cout << area << " " << endl;
		}
		else if (userInput == "end")
		{
			cout << "Thank you for enjoying my code! Bye now!" << endl;
			quit = true;
		}
		else
		{
			cout << "I think you ment to type: end" << endl;
		}
		
		
	}
	
	return 0;
}