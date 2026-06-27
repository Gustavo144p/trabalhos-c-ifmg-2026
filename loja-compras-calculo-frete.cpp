#include <iostream>

using namespace std;


int main() {
    
    int usuario ;
    float money;
    int forma;

    
    cout << "digite 1 se já possuir cadastro e 0 caso ainda não possua ";
    cin >> usuario;
    cout << "muito bem agora digite o valor da sua compra ";
    cin >> money;
        
    if(usuario == 1){
     cout << "usuario cadastrado\n";
     cout << "sua compra ficou R$" << money << " como pussui cadastro o frete e grtis ";
    }
   else if (usuario == 0){
        cout << "usuario ainda não cadastrado\n";
        cout << "sua compra ficou R$" << money + 9.90<< " como não pussui cadastro e adicionado 9.90 de valor ao frete ";
    }

    else {
        cout << "numero nao valido\n";
    }
    cout << "\nmuito bem agora digite sua forma de pagamento\n1 PARA PIX \n2 PARA CARTÃO \n3 PARA CARTÃO\n4 PARA BOLETO\n";
    cin >> forma;
    
    if(forma <= 4 && forma >=1){
    cout << "sua forma de pagamento e a forma numero "<< forma;
    }
    else{
        cout << "forma de pagamento invalidada";
    }

  

    return 0;
}
------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
#define frete 9.90



int main() {
    
    char usuario ;
    float money;
    int forma;
    string pagamentos[] = {"PIX", "CARTÃO", "CARTÃO", "BOLETO"};

    
    cout << "digite S se já possuir cadastro e N caso ainda não possua ";
    cin >> usuario;
   
        
    if(usuario == 'S'|| usuario == 's'){
    cout << "usuario cadastrado\n";
    cout << "muito bem agora digite o valor da sua compra ";
    cin >> money;
    cout << "sua compra ficou R$" << money << " como pussui cadastro o frete e grtis ";
    }
   else if (usuario == 'N' || usuario == 'n'){
    cout << "usuario ainda não cadastrado\n";
    cout << "muito bem agora digite o valor da sua compra ";
    cin >> money;
    cout << "sua compra ficou R$" << money + frete << " como não pussui cadastro e adicionado 9.90 de valor ao frete ";
    }

    else {
        cout << "numero nao valido\n";
    }
    
    if(usuario == 0 || usuario == 1){
    cout << "\nmuito bem agora digite sua forma de pagamento\n1 PARA PIX \n2 PARA CARTÃO \n3 PARA CARTÃO\n4 PARA BOLETO\n";
    cin >> forma;
    
 if(forma >= 1 && forma <= 4) {
    cout << "Sua forma de pagamento é " << pagamentos[forma - 1];
} else {
    cout << "Forma de pagamento inválida";
}
     }

    return 0;
}