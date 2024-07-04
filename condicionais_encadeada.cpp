#include <iostream>
using namespace std;

int main()
{
int  idade;

cout << "quanto anos voce tem ?" << endl;
cin >>idade;

if (idade >=3 && idade <= 11)
{
    cout << "voce esta na categoria : infantil";
  
}else if (idade >=12 && idade <= 17)
{
    cout << "voce esta na categoria : juvenil";

}else if (idade >=18 && idade <= 34)
{
    /* code */
    cout << "voce esta na categoria : Adulto ";

}else if (idade >= 35)
{
    /* code */
    cout << "voce esta na categoria : master ";


}else
{
    cout <<"voce nao tem idade suficiente  para fazer este esposte" << endl;
}






return 0;
}