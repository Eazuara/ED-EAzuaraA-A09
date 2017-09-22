#include "NodeDL.h"
#include <string>
//Nodo para lista doblemente enlazada
template <typename T> class NodeDL {
public:
	T data;//Dato 
	NodeDL* next;//Apuntador a siguiente
	NodeDL* back;//Apuntador a anterior

	NodeDL(T d) {//Constructor
		data = d;
		next = nullptr;
		back = nullptr;
	}
};