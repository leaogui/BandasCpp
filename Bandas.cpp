#include <iostream>
#include <cstdlib>
#include <locale>
#include "Teste.h"
#include "Txt.h"
#include "Controller.h"


int main(int argc, char** argv) {

	setlocale (LC_ALL, "portuguese");
	
	system("color f0");

	Controller control;
	
	control.comeco();
	
	system("pause");
	
	
}
