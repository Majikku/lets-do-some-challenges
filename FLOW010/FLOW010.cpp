#include <iostream>
#include <string>

int main() {
    int a;
    std::cin >> a;
    while(a--) {
        char chr;
        std::string res;
        std::cin >> chr;
        switch (tolower(chr)) {
        case 'b':
            res = "BattleShip";
            break;
        case 'c':
            res = "Cruiser";
            break;
        case 'd':
            res = "Destroyer";
            break;
        case 'f':
            res = "Frigate";
            break;
        };

        std::cout << res << std::endl;
    };
    return 0;
}