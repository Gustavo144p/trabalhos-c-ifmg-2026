#include <iostream>

using namespace std;

int main() {

    int dia ;

    cout << "digite um numero entre 1 e 5 \n";
    cin >> dia;

    switch (dia) {
        case 1:
            cout << "segunda feira\n";
            break;
        case 2:
            cout << "terca feira\n";
            break;
        case 3:
            cout << "quarta feira\n";
            break;
        case 4:
            cout << "quinta feira\n";
            break;
        case 5:
            cout << "sexta feira\n";
            break;
         case 6:
            cout << "sabado\n";
            break;
         case 7:
            cout << "domingo\n";
            break;
        default:
            cout << "numero invalido\n";
            break;
    }

    return 0;
}

________________________________________________________________________________________________________________________________

#include <iostream>

#define frete 9.90;

#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;




int main() {
    
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    #endif

    int usuario ;
    float money;
    int forma;

    
    cout << u8"digite 1 se já possuir cadastro e 0 caso ainda não possua ";
    cin >> usuario;
    cout << "muito bem agora digite o valor da sua compra ";
    cin >> money;
        
    if(usuario == 1){
     cout << "usuario cadastrado\n";
     cout << "sua compra ficou R$" << money << " como pussui cadastro o frete e grtis ";
    }
   else if (usuario == 0){
        cout << "usuario ainda não cadastrado\n";
        cout << "sua compra ficou R$" << money + frete  " como não pussui cadastro e adicionado 9.90 de valor ao frete ";
    }

    else {
        cout << "numero nao valido\n";
    }
    cout << "\nmuito bem agora digite sua forma de pagamento\n1 PARA PIX \n2 PARA CREDITO \n3 PARA DEBITO\n4 PARA BOLETO\n";
    cin >> forma;

    switch (forma)
    {
    case 1:
        cout << "sua forma de pagament e pix";
        break;
    case 2:
        cout << "sua forma de pagament e cretido";
     break;
    case 3:
        cout << "sua forma de pagament e debito";
        break; 
    case 4:
        cout << "sua forma de pagament e boleto";
        break;
     
    default:
        cout << "forma invalida";
        break;
    }
    
  

    return 0;
}
