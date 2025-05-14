#include <iostream>
#include <vector>
using namespace std;

int bestTeamScore(vector<int>& scores, vector<int>& ages);

int main() {
    vector<int> scores = { 4,5,6,5 };
    vector<int> ages = { 2,1,2,1 };
    cout << "Result: " << bestTeamScore(scores, ages) << endl; // Должно быть 16
    return 0;
}