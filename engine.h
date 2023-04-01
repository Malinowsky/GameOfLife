#include <fstream>


using namespace std;

#ifndef ENGINE_H
#define ENGINE_H

class Engine {
private:
	bool** Arr;
	bool** tmp;
	int nRow;
	int nCol;
protected:
	Engine() : Arr(0), tmp(0), nRow(0), nCol(0) {};
	void Init();
	void Analysis();
	virtual ~Engine(){};
private:
	int Analysis1Cell(int r, int c);
	bool Decision(int liveCells);

	Engine(const Engine& cop);
	Engine& operator = (const Engine& cop);
};
void Engine::Init() {
	ifstream in("size.txt");
	in >> nRow;
	in >> nCol;

	Arr = new bool* [nRow];
	tmp = new bool* [nCol];

	for (int i = 0; i < nRow; i++) {
		Arr[i] = new bool[nCol];
		tmp[i] = new bool[nCol];
	}
};

Engine::~Engine() {
	for (int i = 0; i < nRow; i++) {
		delete[] Arr[i];
		delete[] tmp[i];

		delete[] Arr;
		delete[] tmp;
	}
}
#endif // ENGINE_H
