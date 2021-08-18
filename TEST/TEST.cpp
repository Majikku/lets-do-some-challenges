#include <iostream>

int main(){
    // Do I need to add any commments here?
    // It's pretty self explanatory
    // All it does is check if the input variable is 42
    // if not, print the damn thing!
    int msg;
    while (1)
    {
        std::cin >> msg;
        if(msg == 42 ) { return 0; };
        std::cout << msg << std::endl;
    }
    return 1;
}