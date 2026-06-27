#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  SetConsoleOutputCP(CPAGE_UTF8);
 
    int aux,in,fi,p;

    cout << "digite o inicio do seu loop \n";
    cin >> in;
    cout << "digite o fim \n";
    cin >> fi;                                                                                                              
    cout << "igite o passo \n";
    cin >> p;

    for (aux = in; aux <= fi; aux = aux+p){
         cout << "\n contador = " << aux;
    }
    cout << "\n acabou !!!";

    aux = in;
    while (aux <= fi)
    {
        
        cout << "\n contador = " << aux;
        aux = aux+p;
    }
    cout << "\n acabou !!!";

        aux = in;
 
   do {
        
        cout << "\n contador = " << aux;
        aux = aux+p;
   }while (aux <= fi);
} cout << "\n acabou !!!";