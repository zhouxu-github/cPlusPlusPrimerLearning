#include <iostream>
#include "vector"

using namespace std;

template<typename T>
int compare(const T &v1, const T &v2) {
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}

int main() {
    //实例化出int compare(const int&,const int&);
    cout << compare(1, 0) << endl;//T为int

    //实例化出int compare(const vector<int>&,const vector<int>&)
    vector<int> vec1{1, 2, 3}, vec2{4, 5, 6};
    cout << compare(vec1, vec2) << endl;//T为vector<int>
}