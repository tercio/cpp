#include <vector>
#include <unordered_map>
#include <iostream>
#include <memory>
#include <string>


using namespace  std;


int main () {

    using UPtrMapSS = unique_ptr<unordered_map<string,string>>;

    using UPtrVectorSI = unique_ptr<vector<string,int>>;

    

    return 0;
}