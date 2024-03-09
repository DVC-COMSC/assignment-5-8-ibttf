#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int N;
    string name;
    int score1, score2;

    cout << "Enter the number of students: ";
    cin >> N;

    ofstream myfile;
    myfile.open ("students.txt");

    myfile << N << "\n";

    for(int i = 0; i < N; i++) {
        cout << "Enter the student's name: ";
        cin >> name;
        cout << "Enter the first score: ";
        cin >> score1;
        cout << "Enter the second score: ";
        cin >> score2;

        myfile << name << " " << score1 << " " << score2 << "\n";
    }

    myfile.close();

    return 0;
}