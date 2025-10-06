#include <iostream>
using namespace std;
int main(){
    int idade;
    cout << "digite sua idade ";
    cin >>idade;
    if ( idade >= 18 ) {
        cout << " voce e maior de idade " << endl;
    } else {
        cout << " voce e menor de idade " <<endl;
    }
    return 0;
}