#include <iostream>
using namespace std;

int main()
{
    system("cls");
    cout << " iniciando  o programa da temperatura \n ";
    int temperatura = 50;

    if (temperatura >= 0 && temperatura <= 15)
    {
        cout << "acender o led vermelho \n";
       
    }
    else if (temperatura >= 16 && temperatura <= 23)
    {
        cout << "acender o led azul\n";
    }
    else if (temperatura >= 24 && temperatura <= 30)
    {
        cout << "acender o led verde \n";
    }
    else if (temperatura >= 32 && temperatura <= 37)
    {
        cout << "acender o led roxo \n";
    

    } else {
        cout << "acender o led verde e o vermelho \n" ;
    

    

        cout << "fim do programa !!" << endl;
    }


}