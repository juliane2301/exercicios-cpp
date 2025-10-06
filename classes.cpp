#include <iostream>
using namespace std;

// definição da classe
class Pessoa {
private:
    string nome;
    int idade;

public:
    void cadastrar() {
        cout << "Digite o nome: ";
        getline(cin, nome);
        cout << "Digite a idade: ";
        cin >> idade;
    }

    void mostrar() {
        cout << "\nNome: " << nome << endl;
        cout << "Idade: " << idade << endl;
    }
};

int main() {
    Pessoa p1;

    cin.ignore(); // evita erro na leitura de string
    p1.cadastrar();
    p1.mostrar();

    return 0;
}
