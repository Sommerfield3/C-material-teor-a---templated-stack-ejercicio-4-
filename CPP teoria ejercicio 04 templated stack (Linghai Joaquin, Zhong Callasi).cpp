/*Using templates, implement a Stack class that can be used to store items of any type. You
do not need to implement any constructors or destructors; the default constructor should be
sufficient, and you will not need to use new. Your class should support the following 3 public
functions (assuming T is the parameterized type which the Stack is storing)*/
#include <iostream>
#include <vector>
using namespace std;
template <class T>
class stack{
private:
	T elementoSuperior;
	vector<T> pila;
public:
	stack();
	bool empty();
	void push(const T item);
	T* top();
	void pop();
	/*stack friend operator+(stack const &objeto2);*/
};
template <class T>
stack<T>::stack(){

}
template <class T>
bool stack<T>::empty(){
	if ((pila.size())!=0){
		return false; /*Retorna falso si encuentra elementos*/
	}
	else{
		return true; /*Retorna verdadero si no encuentra elementos*/
	}
}

template <class T>
void stack<T>::push(const T item){
	pila.push_back(item);
}
template <class T>
T* stack<T>::top(){
	if ((this->empty())==0){
		return &pila[(pila.size())-1];
	}
	else{
		exit(EXIT_FAILURE); 
	}
}
template <class T>
void stack<T>::pop(){
	pila.pop_back();
}/*
template <class T>
stack<T> operator+(stack const &objeto2){
	stack<T>  stackResul;
	(stackResul.pila).insert(pila.end(),(objeto2.pila).begin(),(objeto2.pila).end());
	return stackResul;
	return stack<T>();
}*/
int main(int argc, char *argv[]) {
	stack<int> stackEnteros;
	stack<float> stackFlotantes;
	stack<string> stackStrings;
	/*Enteros*/
	stackEnteros.push(54);
	stackEnteros.push(216);
	stackEnteros.push(73);
	stackEnteros.push(1654);
	stackEnteros.push(125);
	stackEnteros.push(874);
	cout<<endl;
	int *topElementoEntero=stackEnteros.top(); 
	cout<<"Ultimo elemento ingresado en la pila de enteros: "<<*topElementoEntero<<endl;
	stackEnteros.pop();
	topElementoEntero=stackEnteros.top(); 
	cout<<"Luego de eliminar la ultima posicion:: "<<endl;
	cout<<"Ultimo elemento ingresado en la pila de enteros: "<<*topElementoEntero<<endl;
	/*Flotantes*/
	stackFlotantes.push(32.43);
	stackFlotantes.push(45.22);
	stackFlotantes.push(73.75);
	stackFlotantes.push(10.32);
	stackFlotantes.push(86.31);
	stackFlotantes.push(53.86);
	cout<<endl;
	float *topElementoFlotante=stackFlotantes.top(); 
	cout<<"Ultimo elemento ingresado en la pila de flotantes: "<<*topElementoFlotante<<endl;
	stackFlotantes.pop();
	topElementoFlotante=stackFlotantes.top(); 
	cout<<"Luego de eliminar la ultima posicion:: "<<endl;
	cout<<"Ultimo elemento ingresado en la pila de flotantes: "<<*topElementoFlotante<<endl;
	/*Strings*/
	stackStrings.push("Hola");
	stackStrings.push("Queso si");
	stackStrings.push("Elemento 3");
	stackStrings.push("Vaya, mas ejemplos");
	stackStrings.push("Mmm....");
	stackStrings.push("Silicio y cadmio");
	cout<<endl;
	string *topElementoString=stackStrings.top(); 
	cout<<"Ultimo elemento ingresado en la pila de strings: "<<*topElementoString<<endl;
	stackStrings.pop();
	topElementoString=stackStrings.top(); 
	cout<<"Luego de eliminar la ultima posicion: "<<endl;
	cout<<"Ultimo elemento ingresado en la pila de strings: "<<*topElementoString<<endl;
	
	stack<int> a;
	stack<int> b;
	a.push(1);
	a.push(2);
	b.push(3);
	b.push(4);/*
	stack<int> c = a + b;
	int *topElementoC=c.top(); 
	cout<<"Ultimo elemento de la lista combinada: "<<*topElementoC<<endl;*/
	return 0;
}

