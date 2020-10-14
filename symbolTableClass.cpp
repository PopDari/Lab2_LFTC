#pragma once

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

class SymbolTable {

private:

	vector <string> vectorOfTokens;

public:

	void addToken(string token) {
		this->vectorOfTokens.push_back(token);
	}

	bool contains(string token) {
		for (int i = 0; i < this->vectorOfTokens.size(); ++i) 
			if (this->vectorOfTokens[i].compare(token) == 0) {
				return true;
			}
		return false;
	}

	int indexOf(string token) {
		for (int i = 0; i < this->vectorOfTokens.size(); ++i)
			if (this->vectorOfTokens[i].compare(token) == 0) {
				return i;
			}
	}

};