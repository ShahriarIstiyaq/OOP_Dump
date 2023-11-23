#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name = "Name:XXXXXXXX";
    string sem = "Semester: Spring22";
    string code = "Course code: CSE-1221";
    string tile = "Course Tile: Computer programming 2";

    ofstream out;              // ofstream object out.
    out.open("WhoAreYou.txt"); // creating the file.
    out << name << endl;
    out << sem << endl;
    out << code << endl;
    out << tile << endl;

    // ifstream in("WhoAreYou.txt");
    // in >> name;
    // in >>
}