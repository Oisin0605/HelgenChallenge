#include <iostream>
#include <vector>
#include <cstring>
#include <sstream>

using namespace std;

int main()
{
    string input = "123";
    int final = 0;

    if(input.length() > 1) {
        digitSum(input);
    } else {
        stringstream toInt(input);
        toInt >> final;
    }

    cout << "Total of digits is " << final;
}
int digitSum(string input) {

    return 0;
}