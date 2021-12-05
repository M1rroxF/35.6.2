#include <iostream>
#include <string>
#include <map>
#include <exception>
//#include "boost/asio.hpp"

using namespace std;
//using namespace boost::asio;

void check(const map<string, int>& base, const map<string, int>& basket, const string& move, const string& name, int& count) {
    auto itBase = base.find(name);
    auto itBasket = basket.find(name);

    if (itBasket == basket.cend()) throw name;
    if (count > (move == "add" ? itBase->second : itBasket->second) || count < 1) throw count;
}

// ########################
int main() {
    map<string, int> dataBase;
    map<string, int> basket;

    do {
        try {
            string name;
            int count;

            cout << "Enter product or exit: ";

            cin >> name;
            if (name == "exit") break;

            cin >> count;
            if (count < 1) throw count;

            dataBase.insert(pair<string, int>(name, count));
            basket.insert(pair<string, int> (name, 0));
        }
        catch (int x) {
            cout << "Error number: " << x;
        }
    } while (true);



    do {
        string move;

        cout << ">>";
        cin >> move;

        if (move == "add" || move == "remove") {
            try {
                string name;
                int count;

                cin >> name >> count;
                auto itBase = dataBase.find(name);
                auto itBasket = basket.find(name);

                check(dataBase, basket, move, name, count);

                (move == "add" ? itBase->second : itBasket->second) -= count;
                (move == "add" ? itBasket->second : itBase->second) += count;
                cout << "yes" << endl;
            }
            catch (const string &x) {
                cout << "Error name: " << x << endl;
            }
            catch (int x) {
                cout << "Error count: " << x << endl;
            }
        }
        else if (move == "list") {
            for (auto& it : basket) cout << it.first << " - " << it.second << endl;
        }
        else if (move == "exit") break;
    } while (true);
}
