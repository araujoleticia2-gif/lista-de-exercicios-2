#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	float a, b, c;
	
	cout << "digite os valores a, b, c: ";
	cin >> a >> b >> c;
	
	if
		((a * a == b * b + c * c) ||
	(b * b == a * a + c * c) ||
	(c * c == a * a + b * b))
	
	cout << "formam um triangulo retangulo";
	else
	{
		cout << "nao formam um triangulo retangulo";
	}
	return 0;
}