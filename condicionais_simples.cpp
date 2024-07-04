#include <iostream>
using namespace std;

int main()
{
   // exiber mensagem de boas vinda apenas para um usuario que informou um nome 
  
   cout << " iniciando  o programa da hiorhanna  \n ";

   string nome ="";
   string resposta = "nao";

    cout << "Voce gostaria de informar o seu nome ? sim / nao ?" << endl;
  cin >> resposta; 

  if (resposta == "sim")
   {
   cout << "qual e o seu nome?" <<endl;
  cin>> nome;
  cout <<"Bem vindo, " << nome << endl;
}


cout << "fim do programa !!" << endl;

    return 0;
}