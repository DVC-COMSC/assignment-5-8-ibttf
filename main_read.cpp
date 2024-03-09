#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int N;
	string name;
	int score1, score2;

	ifstream myfile;
	myfile.open ("students.txt");

	myfile >> N;

	for(int i = 0; i < N; i++) {
		myfile >> name >> score1 >> score2;
		cout << name << " " << score1 << " " << score2 << "\n";
	}

	myfile.close();

	return 0;
}