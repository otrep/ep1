#ifndef matrix_HPP
#define matrix_HPP

#include <string>

using namespace std;

class matrix {
	private:
		char cell[100][100];
		string name;
		int generations;
		int size;

	public:
		matrix();
		~matrix();

	
		char getcell(int line, int column);
		void setcell(char cell, int line, int column);
		string getname();
		void setname(string name);
		int getgenerations();
		void setgenerations(int generations);
		int getsize();
		void setsize(int size);

		void choosename();
		void choosesize();
		void escrevematrix();
		void montarandom();
		void matrixboard();
		void additem(char letra, int a, int b);
		void additem(matrix * m2);

		
		void printhorizontalborder(int ger);
		void printhorizontalborder();
		void printverticalborder(int line);
		void printgame();

		int liveaccount(int line, int column);
		int liveaccount();
};

#endif
