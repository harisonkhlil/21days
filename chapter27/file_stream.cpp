#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  ifstream myFile;
  myFile.open("HelloFile.txt", ios_base::out);

  if (myFile.is_open()) {
    cout << "File open successful" << endl;

    string fileContents;

    while (myFile.good()) {
      getline(myFile, fileContents);
      cout << fileContents << endl;
    }
    cout << "Finished reading file, will close now" << endl;
    myFile.close();
  } else {
    cout << "open() failed: check if file is in right folder" << endl;
  }
}