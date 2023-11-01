#include "FileManager.h"

vector<string> FileManager::getDirectories(string directoryPath)
{
	vector<string> auxiliarVector;
	for (const auto& directoryPath : directory_iterator(directoryPath)) {
		auxiliarVector.push_back(directoryPath.path().string());
	}

	for (int i = 0; i < auxiliarVector.size() - 1; i++) {
		cout << auxiliarVector[i] << endl;
	}

	return auxiliarVector;
}

vector<string> FileManager::getFiles(string directoryPath)
{
	vector<string> vectorAuxiliar;

	for (const auto& file : directory_iterator(directoryPath)) {
		vectorAuxiliar.push_back(file.path().filename().string());
	}

	for (int i = 0; i < vectorAuxiliar.size() - 1; i++) { 
		cout << vectorAuxiliar[i] << endl; 
	}

	return vectorAuxiliar;
}
