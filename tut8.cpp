#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <array>








// STL array, between array & vector std::array<int,5>

// Statictly sized, remembers the size. Copied
// Ideal for when you know the size of array. Essentially array wrapped in a object

// STL Arrays in practice.
void print_array(std::array<int, 20> &data, int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << data[i] << "\t";

    }
    std::cout << "\n";
}


int main()
{
    std::array<int, 20> data = {1, 2, 3};
    print_array(data, 3);
}
