#include <string>
#include <fstream>
#include <iostream>
using namespace std;


int main(void) {
string input;

ifstream inputFile("sample1.txt");

while (getline (inputFile, input)) {
  cout << input;
  cout << '\n';
}

inputFile.close();

cout << input;
return 0;
}
