#include <vector>
#include <iostream>
#include <map>


using namespace std;

int main() {

    vector<int> v{1,2,3,4};

    for (auto i: v)
        cout << i << endl;


    map<int,bool> m {{1,true},{2,false},{3,true}};

    for (auto i: m)
        cout << i.first << " " << i.second << endl;

    

    return 0;   
}