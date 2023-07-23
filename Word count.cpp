/*C++ program that reads a text file and counts the occurrence of each word using the C++ STL map container*/

#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

int main()
{
    //Reading input from the text file
    ifstream inputFile("Inputfile.txt");


    //Checking if the file is empty
    if (!inputFile)
    {
        cout << "Error in opening the Input text file." <<endl;
        return 1;
    }


    map<string, int> count;
    string word;

    while (inputFile >> word) {
        count[word]++;
    }

    inputFile.close();

    cout << "Occurance of the words and their count from the Input text file:" << endl;
    for (const auto& pair : count)
    {
        cout << pair.first << ": " << pair.second <<endl;
    }

    return 0;
}
