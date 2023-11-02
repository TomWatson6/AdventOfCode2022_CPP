#include "1.h"

using namespace std;

void day1(string inputFile) {
    vector<string> lines = getLines(inputFile);
    vector<int> totals;

    int total = 0;

    for(const string& l : lines) {
        if(l.empty()) {
            totals.push_back(total);
            total = 0;
            continue;
        }

        total += stoi(l);
    }

    sort(totals.begin(), totals.end());

    // Part 1
    cout << "Part 1: " << totals.back() << endl;

    // Part 2
    vector<int> lastNumbers(totals.end() - 3, totals.end());

    cout << "Part 2: " << lastNumbers[0] + lastNumbers[1] + lastNumbers[2] << endl;
}
