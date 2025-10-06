#include <iostream>
using namespace std;

// Função sem retorno
void mostrarMensagem() {
    cout << "Bem-vindo(a) à prática de funções em C++!\n";
}

// Função com retorno
float somar(float a, float b) {
    return a + b;
}

int main() {
    mostrarMensagem(); // chama a função

    float x, y;
    cout << "Digite dois números: ";
    cin >> x >> y;

    cout << "A soma é: " << somar(x, y) << endl;

    return 0;
}
