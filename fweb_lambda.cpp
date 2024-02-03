/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   $Creator: OOOO $
   ======================================================================== */
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

//void myForEach(const std::vector<int>& values, const std::function<void(int)>& myFunc)
//{
//    for(int value : values)
//    {
//        myFunc(value);
//    }
//}

int main()
{
    std::vector<int> values = { 1, 2, 3, 4, 5};

    auto iter = std::find_if(values.begin(), values.end(), [](int value) { return value > 3; });

    std::cout << *iter << std::endl;

    //auto lambda = [](int value) { std::cout << "Value: " << value << std::endl; };

    //myForEach(values, lambda);

    std::cin.get();
}
