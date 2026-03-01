#include <iostream>


using namespace std;


int main()
{
	int x;
	int y;
	int sum;
	string add;
	string subtract;
	string multiply;
	string divide;
	string userInput;
	string end;
	bool quit = false;
	

	while (!(quit)) 
	{
		
		cout << "Input a vaule for x" << endl;
		cin >> x;

		cout << "Input a vaule for y" << endl;
		cin >> y;

		cout << "Would you like to Add, Subtract, Multiply, Divide your values? Or would you like to end?" << endl;
		cin >> userInput;
		

		if (userInput == "add")
		{
			sum = x + y;
			cout << sum << " " << endl;
		}
		else if (userInput == "subtract")
		{
			sum = x - y;
			cout << sum << " " << endl;
		}
		else if (userInput == "multiply")
		{
			sum = x * y;
			cout << sum << " " << endl;
		}
		else if (userInput == "divide")
		{
			sum = x / y;
			cout << sum << " " << endl;
		}
		else if (userInput == "end")
		{
			cout << "Thank you for enjoying my code! Bye now!" << endl;
			quit = true;
		}
		
		
	}
	
	return 0;
}