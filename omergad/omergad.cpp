
#include "stdafx.h"
using namespace std;
#include <string>
#include <stdio.h>
#include <iostream>
class istanbul
{
public:
	istanbul(int, string);
	istanbul();
	int year;
	string name;

};
istanbul::istanbul(int a, string b)
{
	this->year = a;
	this->name = b;
}
istanbul::istanbul() {

}
int main()
{
	istanbul ist;
	cout << " plz enter the name =:" << endl;
	cin >> ist.name;
	cout << " plz enter the year =:" << endl;
	cin >> ist.year;
	cout << " the  name is =:" << ist.name<<endl;
	cout << " the  yers is =:" << ist.year << endl;
	system("pause");
    return 0;
}

