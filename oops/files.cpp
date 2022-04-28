#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    // ofstream out("harsh.txt");
    // out << "Something random";

    ifstream in("harsh.txt");
    // string temp;
    // // in >> temp;
    // getline(in, temp);
    // cout << temp << endl;

    while (!in.eof())
    {
        string temp;
        getline(in, temp);
        cout << temp << endl;
    }

    // cout << "My name is Harsh Gupta" << endl;

    // out.close();
    in.close();

    return 0;
}