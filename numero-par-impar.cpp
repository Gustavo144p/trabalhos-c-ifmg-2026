#include <iostream>

using namespace std;

int main() {
 int num;
 
 cout << "digite um numero pra conferir se e par ou impar, positivo ou negativo";
 cin >> num;
 if (num >= 0){
     if (num % 2 == 0)
        cout << "o numero e par e positivo \n";
          else 
             cout << "o numero e impar e positivo \n";
 }
 else{
     if (num % 2 == 0)
        cout << "o numero e par e negativo \n";
         else 
             cout << "o numero e impar e negativo";
 }
 return 0;
}