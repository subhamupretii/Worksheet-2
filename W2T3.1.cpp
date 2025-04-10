#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    const int Size = 10;
    string titles[Size];

    cout << "Enter 10 book titles =";
    for (int i = 0; i < Size; i++) {
        cout << "Book " << (i + 1) << " = ";
        getline(cin, titles[i]);
    }
 string filename;
    cout << "Enter the name of the binary file to save titles ( books) ";
    getline(cin, filename);

    ofstream outFile(filename, ios::binary);
    if (!outFile) {
        cout << "Could not open file to write.";
        return 1;
    }
 for (int i = 0; i < Size; i++) {
        int len = static_cast<int>(titles[i].length());
        outFile.write(reinterpret_cast<const char*>(&len), sizeof(len));
        outFile.write(titles[i].c_str(), len);
    }

    outFile.close();
    cout << "Titles saved successfully.";
string searchTitle;
    cout << "Enter a book title to search = ";
    getline(cin, searchTitle);

    ifstream inFile(filename, ios::binary);
    if (!inFile) {
        cout << "Could not open file to read.";
        return 1;
    }
 bool found = false;
    for (int i = 0; i < Size; i++) {
        int len;
        inFile.read(reinterpret_cast<char*>(&len), sizeof(len));

        char* buffer = new char[len + 1];
        inFile.read(buffer, len);
        buffer[len] = '\0';

        string titleInFile(buffer);
        delete[] buffer;

        if (titleInFile == searchTitle) {
            found = true;
            break;
        }
    }
inFile.close();
 if (found)
        cout << "Title found in file.";
    else
        cout << "Title not found in file.";

    return 0;
}