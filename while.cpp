#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int tdpessoas = 0;
    cout << "Quantas pessoas voce quer saudar?\n";
    cin >> tdpessoas;

    int contador = 1;

    while (contador <= tdpessoas)
    {
        cout << "Boa tarde " << contador << endl;
        contador++;
    }

    return 0;
}