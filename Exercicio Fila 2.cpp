#include <iostream>
#include <list>

using namespace std;

class FilaAtendimento {
public:
    FilaAtendimento() {}

    void enfileirar(int idade) {
        fila.push_back(idade);
    }

    int desenfileirar() {
        if (!fila.empty()) {
            int idade = fila.front();
            fila.pop_front();
            return idade;
        } else {
            return -1;
        }
    }

    void mostrarFilaSemRegra() {
        cout << "Fila sem a regra (por ordem de chegada): " << endl;
        for (auto idade : fila) {
            cout << idade << " ";
        }
        cout << endl;
    }

    void mostrarFilaComRegra() {
        cout << "Fila com a regra (prioridade para pacientes com mais de 60 anos): " << endl;
        list<int> fila_prioritaria;
        for (auto idade : fila) {
            if (idade > 60) {
                fila_prioritaria.push_back(idade);
            }
        }
        for (auto idade : fila) {
            if (idade <= 60) {
                fila_prioritaria.push_back(idade);
            }
        }
        for (auto idade : fila_prioritaria) {
            cout << idade << " ";
        }
        cout << endl;
    }

private:
    list<int> fila;
};

int main() {
    FilaAtendimento fila;

    fila.enfileirar(60);
    fila.enfileirar(40);
    fila.enfileirar(70);
    fila.enfileirar(55);
    fila.enfileirar(25);
    fila.enfileirar(63);
    fila.enfileirar(35);
    fila.enfileirar(42);
    fila.enfileirar(31);
    fila.enfileirar(68);
    fila.enfileirar(48);
    fila.enfileirar(26);
    fila.enfileirar(50);
    fila.enfileirar(64);
    fila.enfileirar(45);

    cout << "*************Mostrar a fila sem a regra:*************" << endl;
    cout << endl;
    fila.mostrarFilaSemRegra();
    cout << endl;


    cout << "*************Mostrar a fila com a regra:*************" << endl;
    cout << endl;
    fila.mostrarFilaComRegra();
    cout << endl;

    cout << "Desenfileirando os pacientes sem a regra:" << endl;
    while (true) {
        int idade = fila.desenfileirar();
        if (idade == -1) {
            break;
        }
        cout << "Idade do paciente atendido: " << idade << endl;
    }

    return 0;
}
