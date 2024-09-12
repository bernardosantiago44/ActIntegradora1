#pragma ONCE
#include <string>

using namespace std;

class FileReader {
private:
    FileReader();
public:
    static string readFile(const string& filename);
};