#include <iostream>
#include <bitset>
using namespace std;
int main1111()
{
    int x = 20;
    std::string binary = std::bitset<8>(x).to_string(); //to binary
    std::cout<< binary<<"\n";
    x = x << 3;
    binary = std::bitset<8>(x).to_string(); //to binary
    std::cout<< binary<<"\n";
    return 0;
}