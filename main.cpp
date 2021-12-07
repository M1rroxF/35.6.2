#include <iostream>
#include <unordered_set>
#include <memory>
#include <vector>

using namespace std;

auto getCount = [](vector<int> vec) {
    unordered_set<int> uno;
    for (auto &i : vec) uno.emplace(i);
    vec.clear();
    for (auto &i : uno) vec.push_back(i);
    return make_unique<vector<int>>(vec);
};

int main() {
    vector<int> vec = {3, 3, 2, 1, 2, 1, 5};
    unique_ptr<vector<int>> uni = getCount(vec);
    for (auto &i : *uni) cout << i << endl;
}