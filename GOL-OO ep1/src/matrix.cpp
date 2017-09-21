#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "matrix.hpp"
#include "glider.hpp"
#include "block.hpp"
#include "blinker.hpp"

Matrix::Matrix(){
	int line, column;

	name = "dead cells";
	generatioms = 100;
	size = 20;

	for(line = 0; line < 100; line++){
		for(column = 0; column < 100; column++){
			cell[line][column] = ' ';
		}
	}
}

matrix::~matrix(){
}

char matrix::getcell(int line, int column){
	return cell[line][column];
}

void matrix::setcell(char cell, int line, int column){
	this->cell[line][column] = cell;
}

string matrix::getname(){
	return name;
}

void matrix::setname(string name){
	this->name = name;
}

int matrix::getgenerations(){
	return generations;
}

void matrix::setgenerations(int generations) {
	this->generations = generations;

	if (generations < 1 || generations == '\0') {
		throw(1);
	}
}

int matrix::getsize(){
	return size;
}

void matrix::setsize(int size){
	this->size = size;
}

void matrix::choosename(){
	char name[100];

	cout << "name of size: ";
	getchar();
	cin.getline(name, 100);
	setname(name);
}

void matrix::choosesize(){
	int size;

	cout << "(OBS : Write only 1 number for the size, because the matrix is ??""
	<< "square, has the same number for lines and columns)"<< endl;
	cout << "size of matrix: ";
	cin >> size;
	setsize(size);

	if(getsize() < 1 || size > 90){
		cout << "ERROR: THE game Not SUPPORT A matrix of THIS size." << endl;
		throw(1);
	}
}

void matrix::writematrix(){

	int line, column;
	char cell;

	choosename();
	choosesize();
	setgenerations(10);

	system("clear");

	cout << endl;
	cout << "write your size " << getname() << " as follows: use '*' to"
		<<" live cells and '-' for dead. Separate cells with 2 spaces."<< endl;
	cout << endl;

	
	printHorizontalborder();
	for (line = 4; line < getsize() + 4; line++) {
		printverticalborder(line);
		for (column = 4; column < getsize() + 4; column++) {
			cin >> cell;
			if (cell == '-') {
				setcell(' ', line, column);

			}else{
				setcell('*', line, column);
			}
		}
	}

	system("clear");
}

void matrix::montaAleatoria(){
	int line, column, number;

	choosesize();
	name = "random"

	for (line = 4; line < (getsize() + 4); line++) {
		for (column = 4; column < (getsize() + 4); column++) {
		
			number = ( rand() % 4 );
			if (number == 0) {
				
				setcell('*', line, column);
			}
		}
	}

}
void matrix::boardmatrix() {

	char answer = 'a';
	int positionA, positionB;

	
	choosename();
	choosesize();
	setgenerations(60);

	while (answer != 'j') {

		system("clear");

		cout << endl;
		printHorizontalborder();
		printgame();
		cout << endl;

	
		cout << endl;
		cout << "
Choose the set you want to add: "<< endl;
		cout << "DIGITE:\n V for Blinker\n K for Block\n H for Glider\n"
		" j for finish\n" << endl;
		cin >> answer;

		if (answer < 97) {
			answer = answer + 32;
		}

		while (answer != 'h' && answer != 'v' && answer!= 'k' && answer!= 'j') {
			cout << "\n\nERROR: THE ASSEMBLY WAS NOT FOUND.\n\nwrite again: ";
			cin >> answer;
			cout << endl;
		}

		if (answer != 'j') {
		
			cout << "\nenter position:" << endl;
			cout << " line: ";
			cin >> positionX;
			if(positionX > size || positionX < 0 || positionX == '\0') {
				cout << "ERROR: THE POSITION DOES NOT BELONG TO THE matrix of the game." << endl;
				throw(1);
			}
			cout << " column: ";
			cin >> positionB;
			if (positionB > size || positionB < 0 || positionB == '\0') {
				cout << "ERROR: THE POSITION DOES NOT BELONG TO THE matrix of the game" << endl;
				throw(1);
			}
			cout << endl;

			additem(answer, positionA + 3, positionB + 3);

		}
	}
}

void matrix::additem(char letra, int x, int y){


	Blinker * blinker = new Blinker(a, b);
	Block * block = new Block(a, b);
	Glider * glider = new Glider(a, b);

	if (letra == 'k') {
		additem(block);
	}else if(letra == 'v{
		additem(blinker);
	}else if(letra == 'h'){
		additem(glider);
	}

	blinker->~Blinker();
	block->~Block();
	glider->~Glider();
}

void Matrix::add item(Matrix * m2){

	int line, column=;

	for (line = 0; line < 100; line++) {
		for (column = 0; column < 100; column++) {
			if (m2->getcell(line, column) == '*') {
				setcell('*', line, column);
			}
		}
	}
}

void matrix::printHorizontalborder(int ger){


	int i;

	cout << endl << "GENERATION "<< ger << endl;
	cout << "   ";

	for (i = 0; i < size; i++) {
		if (i< 9) {
			cout << (i+1) << "  ";
		}else{
			cout << (i+1) << " ";
		}
	}
	cout << endl;
}

void matrix::printhorizontalborder(){


	int i;
	cout << "   ";

	for (i = 0; i < size; i++) {
		if (i< 9) {
			cout << (i+1) << "  ";
		}else{
			cout << (i+1) << " ";
		}
	}
	cout << endl;
}

void matrix::printverticalborder(int line) {

	if ((line - 3) < 10) {
		cout << (line - 3) << "  ";
	}else{
		cout << (line - 3) << " ";
	}
}

int matrix::aliveaccount(int line, int column){


	int alive = 0;
	if (cell[line-1][column-1] == '*'){
		alive++;
	}
	if (cell[line-1][column] == '*'){
		alive++;
	}
	if (cell[line-1][column+1] == '*'){
		alive++;
	}

	if (cell[line][column-1]  == '*'){
		alive++;
	}
	if (cell[line][column+1] == '*'){
		alive++;
	}

	if (cell[line+1][column-1] == '*'){
		alive++;
	}
	if (cell[line+1][column] == '*'){
		alive++;
	}
	if (cell[line+1][column+1] == '*'){
		alive++;
	}

	return alive;
}

int matrix::liveaccount(){

	int alive = 0, line, column;

	for (line = 4; line < getsize() + 4; line++) {
		for (column = 4; column < getsize() + 4; column++) {
			if (getcell(line, column) == '*'){
				alive++;
			}
		}
	}

	return alive;
}

void matrix::printgame() {


	int line, column;

	for (line = 4; line < size + 4; line++) {
		printVerticalborder(line);
		for (column = 4; column < size+4; column++) {
			cout << getcell(line, column) << "  ";
		}
		cout << endl;
	}
}
