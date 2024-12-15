#include <vector>
#include <cstring>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

void problem1(std::vector<std::string> lines) {
	std::string temp;
	while (std::getline(lines, temp, ' ')) {	

	} 
}

int main(void) {

std::string temp;
std::ifstream inputFile("sample.txt");

if(inputFile) {
	std::ostringstream ss;
	ss << inputFile.rdbuf(); 
	temp = ss.str();
}
inputFile.close();

std::stringstream stream(temp);

std::vector<std::string> lines;
while (getline(stream, temp, '\n')) {
	lines.push_back(temp);
}

for(auto &line : lines) {
	std::cout << line << std::endl;
}

return 0;
}
