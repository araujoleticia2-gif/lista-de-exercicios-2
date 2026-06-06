#include <iostream>
using namespace std;

int main() {
    float p1, p2, media;

    cin >> p1 >> p2;

    media = (p1 + 2 * p2) / 3;

    cout << "Media: " << media << endl;

    if (media >= 5)
        cout << "Aprovado";
    else
        cout << "Reprovado";

    return 0;
}