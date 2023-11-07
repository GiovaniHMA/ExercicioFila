#include <iostream>
#include <list>

using namespace std;

class Fila {
	public: 
		Fila(){}

		void enfileirar(string elemento){
			lista.push_back(elemento);
		}
		
		string desinfileirar(){
			if (lista.empty()){
				return 0;
			}
			
			string elemento = lista.front();
			lista.pop_front();
			return elemento;
		}
		
		bool vazia(){
			return lista.empty();
		}
		
		void mostrarAposentado(){
		for (auto aposentado : lista){
			cout << aposentado << " " << endl; 
		}
	}	
	
	private:
		list<string> lista;
		
};

int main(){
	Fila fila;
	
	fila.enfileirar("Juliano");
	fila.enfileirar("Gezon");
	fila.enfileirar("Bruno");
	fila.enfileirar("Adriano");
	fila.enfileirar("Giovani");
	fila.enfileirar("Wagner");
	fila.enfileirar("Eric");
	fila.enfileirar("Gustavo");
	fila.enfileirar("Fabiana");
	fila.enfileirar("Emanuela");
	fila.desinfileirar();
	fila.desinfileirar();
	fila.desinfileirar();
	fila.desinfileirar();
	fila.desinfileirar();
	fila.enfileirar("Marcela");
	fila.enfileirar("Jana");
	fila.enfileirar("Isabela");
	fila.enfileirar("Naiara");
	
	fila.mostrarAposentado();
	
	return 0;
}
