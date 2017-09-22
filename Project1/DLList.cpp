#include "DLList.h"
#include "NodeDL.cpp"
using namespace std;

template <typename T> class DLList {
public:
	NodeDL<T>* first;
	NodeDL<T>* last;
	NodeDL<T>* pointer;
	int length;

	DLList() {//Constructor por defecto
		first = NULL;
		last = NULL;
		pointer = NULL;
		length = 0;
	}

	DLList() {//Constructor con un primer nodo
		NodeDL<T> node = new NodeDL<T>(d);
		//Apuntamos primero y ultimo al nuevo nodo
		*first = node;
		*last = node;
		//Incrementamos el contador de elementos de la lista
		length++;
	}

	//Metodos
	//Esta Vacia
	bool isEmpty() {
		return length == 0;
	}

	//Insertar al inicio
	//Escenarios: Lista vacia, lista con elementos
	void insertFirst(T d) {
		NodeDL<T> node = new NodeDL<T>(d);
		if (isEmpty()) {//Si la lista esta vacia
			*first = node;
			*last = node;
		}
		else {//Si la lista ya cuenta con elementos
			  //El siguiente del nuevo nodo apunta al nodo que apunta first
			node.next* = first;
			//El nodo que apunta first en su apuntador bacj apuntara al nuevo nodo
			first->back = node;//Esta utilizando el atributo back del nodo al que esta apuntando
							   //El apuntador first apunta al nuevo nodo
			*first = node;
		}
		length++;
	}

	void insertLast(T d) {
		NodeDL<T> node = new NodeDL<T>(d);
		if (isEmpty()) {
			*first = node;
			*last = node;
		}
		else {//Si la lista ya existe
			node.back* = last;
			last->next = node;
			*last = node;
		}
		length++;
	}
	void deleteFirst() {
		if (!isEmpty()) {
			if (first.next == nullptr) {//Si la lista tiene solo un elemento
				*first = nullptr;
				*last = nullptr;
			}
			else {
				*first = first->next;
				first->back = nullptr;
			}
			length--;
		}
		if (isEmpty()) {
			cout << "The list is empty" << endl;
		}
	}
	void deleteLast() {
		if (!isEmpty()) {
			if (first.next == nullptr) {//Si la lista tiene solo un elemento
				*first = nullptr;
				*last = nullptr;
			}
			else {
				pointer = first;
				while (pointer->next != last) {//Recorre la lista y se detiene en el elemento anterior al ultimo
					pointer = pointer.next;
				}
				last = pointer;
				last->next = nullptr;
				pointer = nullptr;
			}
			length--;
		}
	}
	void deleteNode(T d) {
		pointer = first;
		NodeDL<T> node = new NodeDL<T>(d);
		if (!isEmpty()) {
			if (first == last) {//Si fue el primer o unico elemento de la lista
				if (first.data == d) {
					deleteFirst();
				}//Si esta dentro de la lista
			}
			else {
				if (first.data == d) {
					deleteFirst();
				}
				else {
					pointer = first;
					NodeDL<T>* pointer2 = first.next.next;
					while (pointer.next != null) {
						if (pointer.next.data == n) {
							pointer.next = pointer.next.next
								pointer2 = ´pointer2.back.back;
							length--;
						}
						pointer = pointer.next;
						pointer2 = pointer2.next;
					}
				}
			}
		}
		if (isEmpty()) {
			cout << "The list is empty" << endl;
		}
	}


	void showList() {
		pointer = first;
		cout << "first->";
		for (int i = 0; i<length; i++) {
			cout << "[" << pointer.data.toString() << "]->";
			pointer = pointer.next;
		}
		cout << "<-last";
	}
};