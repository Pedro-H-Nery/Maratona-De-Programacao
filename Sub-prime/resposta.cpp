#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int b, n, saldo, b1, b2, divida;
    char resposta;
    cin >> b >> n;
    
    while(b != 0 || n != 0){
        int saldos[b];
        resposta = 'S';
        for(int i = 0 ; i < b ; i++){
            cin >> saldo;
            saldos[i] = saldo;
        }
        for(int i = 0 ; i < n ; i++){
            cin >> b1 >> b2 >> divida;
            saldos[b1-1] -= divida;
            saldos[b2-1] += divida;
        }
        
        for(int i = 0 ; i < b ; i++){
            if(saldos[i] < 0){
                resposta = 'N';
                break;
            }
        }
        
        cout << resposta << endl;
        cin >> b >> n;
    }
    
    return 0;
}