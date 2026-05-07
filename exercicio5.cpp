#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	float base, altura, area;
	
	cout << "digite a base: ";
	cin >> base;
	
	cout << "digite a altura: ";
	cin >> altura;
	
	area = base * altura;
	
	cout << "area: " << area << endl;
	
	if (area > 100)
		cout << "terreno grande";
	else
	{
		cout << "terreno pequeno";
	}
	
	return 0;
}