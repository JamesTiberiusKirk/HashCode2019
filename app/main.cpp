#include <iostream>
#include <fstream>
#include <>

using namespace std;

int main()
{
    cout << "Hello HashCode\n";

    ofstream picFile;
    picFile.open("../example_data/a_example.txt");


    picFile.close();
    return 0;
}
