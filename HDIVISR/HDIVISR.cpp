#include <iostream>

int main(){
    int num;
    std::cin >> num;
    if(num < 2) { return 0; };

    for(int i=num-1; i>=1; i--){
        int sol = num%i;
        if(sol == 0 && i<10){
            std::cout << i;
            return 0;
        }
    }
    return 0;
}