#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	float a, b, c;
	
	cout << "digite os tres lados: ";
	cin >> a >> b >> c;
	
	if (a + b > c && a + c > b && b + c > a)
		if (a == b && b == c)
			cout << " triangulo equilatero";
		else if (a == b || a == c || b == c)
			cout << "triangulo isoceles";
		else
		{
			cout << "triangulo escaleno";
		}
		else
		{
			cout << "nao formam um triangulo";
		}
	return 0;
}