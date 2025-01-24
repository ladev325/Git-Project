#include <iostream>
#include "PC.h"


int main() {
	PC* pc = new PC[5]{
	 {"HP", 2.4, 8, false, 8565},
	 {"Acer", 2.4, 8, false, 20000},
	 {"HP2", 2.7, 8, true, 34758},
	 {"Dell", 2.7, 8, false, 65464},
	 {"HP", 2.4, 8, true, 78777}
	};
	for (int i = 0; i < 5; i++) {
		pc[i].showInfo();
		cout << "\n\n\n";
	}
}