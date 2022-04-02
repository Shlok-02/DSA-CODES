#include <fstream>

#include <iostream>

using namespace std;

int main (int argc, char** argv) {

   fstream File("d.txt", ios::in | ios::out );

   File << "TutorialsPoint";

   File.seekg(9, ios::beg);

   char F[9];

   File.read(F, 5);

   F[5] = 0;

   cout <<F<< endl;

   File.close();

}