#include <iostream>
#include <vector>
using namespace std;

int bestTeamScore(vector<int>& scores, vector<int>& ages);

void test(const char* name, vector<int> scores, vector<int> ages, int expected) {
    int result = bestTeamScore(scores, ages);
    cout << "Test: " << name << " -> ";
    cout << (result == expected ? " OK" : " FAIL") << "\n";
    cout << "  Expected: " << expected << ", Got: " << result << "\n\n";
}

int main() {
    test("Example 1", { 1,3,5,10,15 }, { 1,2,3,4,5 }, 34);
    test("Example 2", { 4,5,6,5 }, { 2,1,2,1 }, 16);
    test("Example 3", { 1,2,3,5 }, { 8,9,10,1 }, 6);
    return 0;
}
