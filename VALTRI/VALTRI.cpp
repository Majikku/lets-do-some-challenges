#include <iostream>

int main(){
    int num;
    std::cin >> num;
    if(num%5 == 0 || num%6 == 0){
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}