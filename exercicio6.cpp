#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	float peso, altura, r;
	
	cout << "digite o peso: ";
	cin >> peso;
	
	cout << "digite a altura: ";
	cin >> altura;
	
	r = peso / (altura * altura);
	
	cout << " relacao peso/altura ao quadrado: " << r << endl;
	
	if (r < 20)
		cout << "abaixo do peso";
	else if(r < 25)
	{
		cout << "peso ideal";
	}
	else
	{
		cout << "acima do peso";
	}
	return 0;
}