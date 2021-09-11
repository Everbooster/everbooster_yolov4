#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

#define CLASS_COUNT 6

int answer[CLASS_COUNT];

int main(void) {

	ifstream p;

	int images = 412;

	vector<string> dir[CLASS_COUNT];

	for (int i = 0;i  < images; i++) {
		string filename = "wasteSorting" + to_string(i + 1) + ".txt";
		p.open(filename);
		cout << i * 100 / images << "%\n";
		if (!p.is_open()) {
			continue;
		}
		else {
			while (!p.eof()) {
				string temp;
				getline(p, temp);
				if (temp != "") {
					answer[temp[0] - '0']++;
					dir[temp[0] - '0'].push_back(filename);
				}
			}
		}
		p.close();
	}

	ofstream f;
	f.open("results.txt");

	int sum = 0;
	for (int i = 0; i < CLASS_COUNT; i++) {
		sum += answer[i];
		f << i << " : " << answer[i] << "개 존재\n";
	}
	f << "총 image 개수 : " << sum << "\n\n\n";

	int index = 0;
	for (auto a : dir) {
		f << index++ << " class 이미지 정보\n";
		for (auto b : a) {
			f << b << "\n";
		}
		f << "\n\n";
	}

}