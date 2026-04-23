#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int a, b;
	
	cout << "digite dois valores: ";
	cin >> a >> b;
	
	if (a > b)
		cout << "maior: " << a;
	else if (b >a)
		cout << "maior: " << b;
	else 
		cout << "os numeros sao identicos ";
	return 0;
}