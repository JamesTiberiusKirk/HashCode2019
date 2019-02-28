#include <iostream>
#include <fstream>

void getData(string filePath);
using namespace std;

int main() {
	string fPath = "../example_data/a_example.txt"
	getData(fPath);
    return 0;
}

void getData(string filePath) {
	string slide;
	exampleTxt.open(filePath);
	if (exampleTxt.is_open()) {
		while (getline(exampleTxt, slide)) {
			cout << slide << endl;
		}
		exampleTxt.close();
	}
	else
		cout << "Unable to open the file" << endl;
}