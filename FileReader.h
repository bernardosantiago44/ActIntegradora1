#pragma ONCE
#include <iostream>
#include <string>

using namespace std;

class FileReader {
private:
    FileReader();
public:
    static void readFile(const string& filename);
};