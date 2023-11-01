#pragma once
#include <fstream>
#include <filesystem>
#include <iostream>
#include <vector>
using namespace std;
using std::filesystem::directory_iterator;

class FileManager
{
private:

public:
	//vector<string> load(string path);
	vector<string> getDirectories(string directoryPath);
	//vector<string> getFiles(string directoryPath);
};

