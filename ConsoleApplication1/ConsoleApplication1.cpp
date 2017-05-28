// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include<iostream>
#include<string>
#include <sstream>
using namespace std;
ostringstream ost;


int main()
{
	//init section for var's
	string name;
	const int meter = 1000;
	const int dcm = 100;
	const int min = 60;
	const int dayInHour = 24;
	const int marsCycle = 686;
	const int terraCycle = 365;
	float mm;
	int day;
	int input, input_2;
	int cycle;
	float resultF = 0;
	float resultD = 0;
	int result = 0;
	int age = 17; //init var type integer

	//partOne.FirstTask
	cout << "Enter your name\n";
	getline (cin,name);
	cout << "Hello, " << name <<"\n" << "Some info\n";
	cout << "Name:" << "\t\t\tOrest\n" << "Surname:" << "\t\tOleshchyk\n" << "Last name:" << "\t\tPetrovich\n\n"; //escape stuff
	cout << "Date of birth:" << "\t\t21.06.93\n" << "City:" << "\t\t\tRivne\n" << "Age:" << "\t\t\t" <<age << endl; //using var
	cout << "Hobby:" << "\t\t\tC++\n";
	//partOne.SecondTask
	cout << "I" << "\t\t\t\t\t\tI\n";
	cout << "\n\thate" << "\t\t\t\thate\n"; //Why? Cuz Java and C# is much better, and Python is like a fairytale
	cout << "\n\t\tyou" << "\t\tyou\n";
	cout << "\n\t\t\tC++\n";
	//Done
	cout << "Now calculate!\n";
	cout << "Enter number:\n";
	cin >> input;
	cout << "Enter second number:\n";
	cin >> input_2;
	result = input + input_2;
	cout << "Result is:" << result << endl;
	cout << "Converting programs\n";
	cout << "Convert kms into meters\n";
	cin >> input;
	result = input * meter;
	cout << "In kms:" << input <<"\n" <<"In meteres:" <<result <<"\n";//Converting kilometers into meters
	cout << "Convert mms to dcms\n";
	cin >> mm;
	resultF = mm / dcm;
	cout << "In mm : " << mm << "\n" << "In dcmeteres:" << resultF <<"\n";
	cout << "Convert day into minutes\n";
	cin >> day;
	result = day * dayInHour * min;
	cout << "Days in minutes : " << result << "\n";
	cout << "Rotation of Mars\n" << "Enter number\n";
	cin >> cycle;
	resultF = cycle * marsCycle % terraCycle;
	resultD = resultF / terraCycle;
	cout << "Result is : " << resultD <<endl;

	return 0;
}