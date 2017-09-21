/*
	Aluno: Vinícius Couto Barros
	Matricula: 16/0147760
*/

#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "matriz.hpp"
#include "block.hpp"
#include "blinker.hpp"
#include "glider.hpp"
#include "gliderGun.hpp"

int main(int argc, char ** argv) {
	Block block;
	Blinker blinker;
	Glider glider;
	GliderGun gun;
	Matriz habtat, memoria;
	int line, column, generation, accountant = 0, livingneighbors, live cells = 1;
	char answer;



	cout << "which set of cells would you like to run?" << endl;

	cout << ":type it\n B for Blinker\n K for Block\n G for Glider\n"
	<< " U for Gosper Glider Gun\n A for random set\n M for set up"
	<< " your own set \n E for write your set of cells\n"
	<< endl;
	cin >> answer;
	cout << endl;

	if (answer < 97) {
		
		answer = answer + 32;
	}

	while (answer != 'e' && answer != 'g' && answer != 'b' && answer !='u'
	&& answer != 'm' && answer!= 'k' && answer!= 'a') {
		cout << "\n\nERRO: YOUR INITIAL SET WAS NOT FOUND.\n\write again: ";
		cin >> answer;
		cout << endl;
	}

	try{
		
		if (answer == 'e') {
			habtat.writematrix();
		}else if (answer == 'a'){
			habtat.montrandom();
		}else if(answer == 'm'){
			habtat.matrixboard();
		}else if (answer == 'k') {
			habtat = block;
		}else if (answer == 'b') {
			habtat = blinker;
		}else if (answer == 'g') {
			habtat = glider;
		}else if (answer == 'u'){
			habtat = gun;
		}
	}catch(int exception){
		
		cout << "\nERRO: YOUR ASSEMBLY HAS NOT BEEN MOUNTED DUE" << endl;
		habtat.setGenerations(0);
	}

	memoria = habtat;

	if (habtat.getGenerations() > 0) {
		system("clear");

		
		habtat.printhorizontalborder();
		habtat.printgame();
		cout << endl;

		cout << endl;
		cout << "You chose: " <<  habtat.getName() << endl;
		cout << " - Ã‰ a matrix "<< habtat.getsize() << "X" << habtat.getsize() << endl;
		cout << " - has " << habtat.getGenerations() << " gerations" << endl;


		cout << "\want to change the number of generations of your cells? (Y/N) ";
		cin >> answer;
		cout << endl;

		while (answer != 's' && answer != 'S' && answer != 'n' && answer != 'N'){
			cout << "\n\nERRO: WRITE 'Y' FOR YES AND 'N' FOR NOT \n\nTry again: ";
			getchar();
			cin >> answer;
			cout << endl;
		}

		if (answer == 's' || answer == 'S') {
			
			cout << "GENERATIONS: ";
			cin >> generation;
			try{
				habtat.setGenerations(generation);
			}catch(int exception){
				cout << "ERROR: INVERED GENERATION NUMBER." << endl;
				habtat.setGenerations(0);
			}
		}
	}

	
	while (accountant < habtat.getGenerations() && livecells > 0) {
		accountant++;
		
		system("clear");

	
		habtat.printhorizontalborder(accountant);
		habtat.printgame();

		for(line = 0; line < 100; line++){
			for(column = 0; column < 100; column++){
				
				livingneighbors = memoria.contaVivas(line,column);

				if (habtat.getCell(line,column) == '*' && (livingneighbors < 2
					|| livingneighbors > 3)) {
					habtat.setCell(' ',line,column);
				}else if(habtat.getCell(line,column) == ' ' && livingneighbors == 3){
					habtat.setCell('*',line,column);
				}else if(habtat.getCell(line,column) == '*' && (livingneighbors == 2
					|| livingneighbors == 3)){
					habtat.setCell('*',line,column);
				}
			}
		}

	
		celulasVivas = memory.liveaccount();

		if (livecells == 0) {
		
			cout << endl << "your cells died." << endl;
		}

		memory = habtat;

		
		usleep(250000);
	}

	return 0;
}
