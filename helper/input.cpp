#include "input.h"

string getAll(string path) {
    string input;
    fstream reader(path);

    char letter;

    for(int i = 0; !reader.eof(); i++) {
        reader.get(letter);
        input += letter;
    }

    reader.close();

    return input;
}

vector<string> getLines(string path) {
    vector<string> lines;
    string input = getAll(path);
    istringstream iss(input);

    int i = 0;

    string line;
    while(getline(iss, line)) {
        lines.push_back(line);
    }

    return lines;
}

vector<int> getInts(string path) {
    vector<int> nums;
    string input = getAll(path);
    istringstream iss(input);

    int i = 0;

    string line;
    while(getline(iss, line)) {
        nums.push_back(stoi(line));
    }

    return nums;
}