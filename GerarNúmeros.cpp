#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
main() {
    int DDD, Prefixo, a, b, c;
    cout << "Digite o DDD: ";
    cin >> DDD;
    cout << "Digite o prefixo: ";
    cin >> Prefixo;
    a = 0;
    for(a=0; a<10000; a++){
        if (a<1000){
            if(a<100){
                if(a<10){
                    cout << " " << DDD <<" " << Prefixo << "000" << a;
                } else cout << " " << DDD <<" " << Prefixo << "00" << a;
            } else cout << " " << DDD <<" " << Prefixo << "0" << a;
        } else
        cout << " " << DDD << " " << Prefixo << " " << a;
    }
}
