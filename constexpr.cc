#include <iostream>
#include <string>
#include <array>


using namespace std;

// item 16 do Effective Modern C++


// C++ 11 - somente return é permitido
constexpr int pow11 (int base, unsigned exp)
noexcept
{

    return ((exp ==0) ? 1 : base * pow11 (base,exp - 1));
}

// C++ 14 - tem mais liberdade
constexpr int pow14 (int base, unsigned exp) 
noexcept
{

    auto result = 1;
    for (unsigned i = 0; i <  exp; ++i) result *= base;

    return result;
}

int main () {

    constexpr auto numConds = 3;

    array<int,pow11(3,numConds)> results11;

    array<int, pow14(3,numConds)> results14;

    cout << results11.size()<<endl;

    return 0;
}