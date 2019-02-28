<<<<<<< HEAD
#include <iostream>
#include <fstream>

void getData(string filePath);
using namespace std;

int main() {
	string fPath = "../example_data/a_example.txt"
	getData(fPath);
=======
#include "slide_template.h"

size_t split(const string &txt, vector<string> &strs, char ch)
{
    size_t pos = txt.find( ch );
    size_t initialPos = 0;
    strs.clear();

    // Decompose statement
    while( pos != string::npos ) {
        strs.push_back( txt.substr( initialPos, pos - initialPos ) );
        initialPos = pos + 1;

        pos = txt.find( ch, initialPos );
    }

    // Add the last one
    strs.push_back( txt.substr( initialPos, min( pos, txt.size() ) - initialPos + 1 ) )
    return strs.size();
}

int main()
{
    SlideData originalData;
    vector<string> outputData;

    for(vector<string> i : originalData){
      /*if(){

      }*/
    }

>>>>>>> 91bc5de783ae89d56178b915fc11aaed03ff0dfc
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