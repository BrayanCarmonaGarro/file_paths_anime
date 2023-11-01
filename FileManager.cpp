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
