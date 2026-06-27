#include <iostream>

using namespace std;
 
#define PRECO 12.90


    
int main() {
    
//  int i = 3;
//   cout << i << endl;
//   i = i + 1;
//   cout << i << endl;
//     return 0;

int pera = 3 ;
char qualidade ='A';
float peso = 3.2;

cout << "Existem " << pera << " peras de qualidade " << qualidade << " pesando " << peso << " quilos \n" ;

cout << "O preço por quilo eh R$ " << PRECO << "O total eh R$ "<< PRECO * peso;
}
------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>

using namespace std;


    
int main() {
  /*  int idade; 
    
    cout << "Entre sua idade:";
    cin >> idade;
    cout << "Voce tem " << idade << " anos";
*/
//  int i = 3;
//   cout << i << endl;
//   i = i + 1;
//   cout << i << endl;
//     return 0;

int pera = 3 ;
char qualidade ='A';
float peso = 3.5;
float preco;

cout << "Existem " << pera << " peras de qualidade " << qualidade << " pesando " << peso << " quilos \n";
cout << "digite o preço da pera ";
cin >> preco;
cout << "O preço por quilo eh R$ " << preco << " O total eh R$ "<< preco * peso;
}