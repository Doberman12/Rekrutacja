
//program wczytuje 2 listy liczb całkowitych i sprawdza, czy lista druga zawiera kwadraty liczb z listy pierwszej
#include <iostream>
#include <vector>
using namespace std;
bool sprawdz(vector<int>list1, vector<int>list2) {
    int czyprawda = 0;
    for (auto & liczba1 : list1) {
        int kwadrat1 = liczba1 * liczba1;
        for (auto & liczba2 : list2) {
            if (kwadrat1 == liczba2) {
                czyprawda++;
                break;
            }
            else {
                continue;
            }
        }
    }
    if (czyprawda == list1.size()) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    //test1 == 1
    cout << "Test1: " << sprawdz({}, {}) << endl;
    //test2 == 1
    cout << "Test2: " << sprawdz({1}, {1}) << endl;
    //test3 == 1
    cout << "Test3: " << sprawdz({ 1,2 }, { 1,4 }) << endl;
    //test4 == 1
    cout << "Test4: " << sprawdz({ 1,2 }, { 1,2,3,4 }) << endl;
    //test5 == 1 
    cout << "Test5: " << sprawdz({ 1,1,1,1,1 }, { 1 }) << endl;
    //test6 == 0
    cout << "Test6: " << sprawdz({ 1,3,2 }, { 4,8,1 }) << endl;
}