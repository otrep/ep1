#include <iostream>
#include "blinker.hpp"

Blinker::Blinker(){

	setName("Blinker");
	setGenerations(10);


	setCell('*', 14, 13);
	setCell('*', 14, 14);
	setCell('*', 14, 15);
}

Blinker::Blinker(int a, int b){

	setNome("Blinker");


	setCell('*', a, b);
	setCell('*', a, b+1);
	setCell('*', a, b+2);
}

Blinker::~Blinker(){}
