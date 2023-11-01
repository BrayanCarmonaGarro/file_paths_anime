
#include <filesystem>
#include <iostream>
#include <string>
#include <vector>
#include "FileManager.h"
#include "SFML/Graphics.hpp"

using namespace std;

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::filesystem::directory_iterator;

int main() {

	FileManager manager;
	manager.getDirectories("./anime");
	cout << endl;
	manager.getFiles("./anime");

	return 0;

}


