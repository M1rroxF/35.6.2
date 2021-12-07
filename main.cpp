#include <iostream>

using namespace std;

int main() {
    initializer_list<int> f = {1, 2, 3, 4, 5};
    for (auto& i: f)
        cout << i << endl;
}