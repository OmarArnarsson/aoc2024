#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;


int main(void) {
string temp;

ifstream inputFile("input1.txt");
if(inputFile) {
      ostringstream ss;
      ss << inputFile.rdbuf(); 
      temp = ss.str();
}
inputFile.close();

cout << temp;
return 0;
}
