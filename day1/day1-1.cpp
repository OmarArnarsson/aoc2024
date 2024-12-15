#include <vector>
#include <cstring>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b) {
	return a <= b;
}

void problem1(vector<int> vec1, vector<int> vec2) {
int sum = 0;

for (int i = 0; i < vec1.size(); i++) {
	int toAdd = vec1[i] > vec2[i] ? vec1[i] - vec2[i] : vec2[i] - vec1[i];
	sum += toAdd;
};
	
cout << "Problem 1 total sum: " << sum << endl;
}

void problem2(vector<int> vec1, vector<int> vec2) {
int sum = 0;

for (int i = 0; i < vec1.size(); i++) {
	int matches = 0;
	for(int j = 0; j < vec2.size(); j++) {
		if(vec1[i] == vec2[j]) {
			matches++;
		}
	}
	sum += vec1[i] * matches;
	matches = 0;
};
	
cout << "Problem 2 total sum: "<< sum << endl;
}

int main(void) {
string temp;

ifstream inputFile("input1.txt");
if(inputFile) {
      ostringstream ss;
      ss << inputFile.rdbuf(); 
      temp = ss.str();
}
inputFile.close();

stringstream stream(temp);

vector<string> lines;
while (getline(stream, temp, '\n')) {
	lines.push_back(temp);
}

vector<int> vec1;
vector<int> vec2;

for (auto& it : lines) {
	vec1.push_back(stoi(it.substr(0,5)));
	vec2.push_back(stoi(it.substr(7)));
};

sort(vec1.begin(), vec1.end(), comp);
sort(vec2.begin(), vec2.end(), comp);

problem1(vec1, vec2);
problem2(vec1, vec2);

return 0;
}
