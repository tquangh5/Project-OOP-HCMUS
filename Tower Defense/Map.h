#pragma once
#include "Cell.h"

class Map {
	int width;
	int height;

	static const int top = 1;
	static const int left = 2;

	vector<vector<Cell>> map;
	int numRow;

public:
	Map() {
		width = 0;
		height = 0;
	}
	int getHeight();
	int getWidth();

	void setSize(int, int);
	void setMap(string);
	void printMap();

	vector<Cell>& operator[] (int);

	void createMap();


	vector<vector<Cell>>& getMap()
	{
		return map;
	}
	int getNumRow()
	{
		return numRow;
	}

	void browseMap(vector< vector<int> >&);
	void findPositionOfTower(vector< vector<int> >&);
};