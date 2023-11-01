
//using namespace std;

//vector<string> directoryPaths(string directoryPath);


/*
#include <filesystem>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::filesystem::recursive_directory_iterator;

int main() {
    string path = "./anime";

    for (const auto& file : recursive_directory_iterator(path))
        cout << file.path() << endl;

    return EXIT_SUCCESS;
}
*/


#include <filesystem>
#include <iostream>
#include <string>
#include <vector>
#include "FileManager.h"

using namespace std;

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::filesystem::directory_iterator;


int main() {
   
    FileManager manager;
    manager.getDirectories("./anime");

}


