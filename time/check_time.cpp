#include <chrono>
#include <iostream>

int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    // do something
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout <<"duration" << duration.count() << " microseconds" << std::endl;
    start = stop;
}
