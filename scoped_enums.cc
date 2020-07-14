#include <vector>
#include <unordered_map>
#include <iostream>
#include <memory>
#include <string>


using namespace  std;

// From Item 10 on Effective Modern C++ 

int main () {



    //enum Color {black,white,red}; // black, white, red are in same scope as Color!    

    //auto white = false;  // error! should not compile - white already exists in this scope

    // the case above is the unscoped enum!

    enum class Color {black = 0, white = 1, red = 2}; // black white and red are now scoped to Color
    //enum class Color: float {black = 0.0, white = 1.0, red = 2.0}; // default underlying type for scoped enum is int, but you can change it

    auto white = false;

    // here we have the scoped enu, which does not leak  ======>>>  USE: enum class ...

    //Color c = white; // error! no enumerator named white!

    Color c = Color::white;

    auto cr = Color::red;

    if (cr == Color::red) {
        cout << "red!" << endl;
    } else {
        cout << "not red!" << endl;
    }

    using flagColors = vector <Color>;
    
    flagColors f1 = {Color::white,Color::red};

    for (auto c: f1) {
        cout << "flag color (1st form): " << static_cast<std::underlying_type<Color>::type>(c) << endl;
        cout << "flag color (2nd form): " << static_cast<std::underlying_type_t<Color>>(c) << endl;
    }


    return 0;
}