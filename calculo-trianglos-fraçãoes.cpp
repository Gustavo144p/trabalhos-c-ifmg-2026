#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout << "entre com uma fração ";
    cin >> a >> b;
    if (b != 0){
        cout << "A fração em decimal eh " << 1.0 * a / b << "\n";
    }
    else{
        cout << "o segundo valor não pode ser 0";
    }

    return 0;
}

----------------------------------------------------------------------------------------------------------------
// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
 int lado1 , lado2 , lado3;
 int s1 , s2 , s3;
 
 cout << "entre com o tamanho do lado dos triangulos: ";
 cin >> lado1 >> lado2 >> lado3;
 
 s1 = lado1 + lado2;
 s2 = lado2 + lado2;
 s3 = lado3 + lado3;
 
 if (lado1>0 && lado2>0 && lado3>0){
     if (s1==s2+s3 || s2==s1+s2 || s2==s1+s3) {
         cout << "triangulo reto! \n";
     }
     else {
         cout << "não pode ser um triangulo reto";
     }
 }
 
 return 0;
}