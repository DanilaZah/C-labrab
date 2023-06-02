#include <iostream>


using namespace std;

string user_str;

int main() {
	ofstream file;
	cin >> user_str;
	file.open("f.txt");
	file <<user_str;
	file << "e" << "n" << "d";
	file.close();
	return 0;
}
 