#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Problem A
	{
	// 14
	int numberA = 5;

	numberA = 9;
	numberA = 11;
	numberA = 14;

	std::cout << "A) " << numberA << std::endl;
	}
	//Problem B
	{
	// 9
	int numberB = 10;
	numberB = 9;

	int thingB = 55;
	thingB = 22;

	std::cout << "B) " << numberB << std::endl;
	}
	//Problem C
	{
	// 21

	int numberC = 3;
	numberC = 7;
	numberC = 1;

	int somethingC = 23;
	somethingC = 21;

	numberC = somethingC;

	std::cout << "C) " << numberC << std::endl;
	}
	//Problem D
	{
	// 3

	int numberD = 1;
	int somethingD = 3;

	numberD = somethingD;

	std::cout << "D) " << somethingD << std::endl;
	}
	//Problem E
	{
	// 6
	int x = 13;

	x = x / 2;

	std::cout << "E) " << x << std::endl;
	}
	//Problem F
	{
	// 6.5
	float y = 13;

	y = y / 2;

	std::cout << "F) " << y << std::endl;
	}
	//Celsius to Fahrenheit
	{
	float degCelsius = 78.0f;
	float degFahrenheit = (degCelsius * 1.8) + 32;
	std::cout << "Enter Ceelsius to convert to Fahrenheit \n";
	cin >> degCelsius;

	std::cout << "Celsius to Fahrenheit) \n" << std::endl;
	std::cout << "Celsius:		\n" << degCelsius << std::endl;
	std::cout << "Fahrenheit:	\n" << degFahrenheit << std::endl;
	cout << endl;
	}
	//Area of a Rectangle
	{
	float rectWidth = 0.0f;
	float rectHeight = 0.0f;
	float rectArea = 0.0f;

	std::cout << "Enter Rectangle Width \n";
	std::cin >> rectWidth;
	cout << endl;

	std::cout << "Enter Rectangle Height \n";
	std::cin >> rectHeight;
	cout << endl;

	rectArea = rectWidth * rectHeight;

	std::cout << "Area of a Rectangle)" << std::endl;
	std::cout << "H: " << rectHeight << " ,W: " << rectWidth << std::endl;
	std::cout << "Area: " << rectArea << std::endl;
	cout << endl;
	}
	//Average of Five
	{
	std::cout << "Enter 5 numbers: ";
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;
	int sum = a + b + c + d + e;
	cout << endl;

	std::cout << "The sum of the 5 numbers is: " << sum << std::endl;
	cout << endl;

	double avg = sum / 5;
	std::cout << "The average of the 5 numbers is " << avg << std::endl;
	cout << endl;
	}
	//Number Swap
	{

	std::cout << "Enter a number for x: \n";
	int x;
	std::cin >> x;
	cout << endl;

	std::cout << "Enter a number for y: \n";
	int y = 24;
	std::cin >> y;
	cout << endl;

	int temp = x;

	x = y;
	y = temp;

	std::cout << "Number Swap)" << std::endl;
	std::cout << "x is " << x << std::endl;
	std::cout << "y is " << y << std::endl;
	cout << endl;
	}
	//Fun Facts for Your Age
	{
	int age;
	int months;

	std::cout << "Enter your Age: \n";
	std::cin >> age;
	cout << endl;

	months = age * 12;

	std::cout << "Howdy! You are " << age << " years old! \n";
	std::cout << "You've been alive for atleast " << months << " months! \n";
	cout << endl;
	}
	system("pause");
	return 0;
}