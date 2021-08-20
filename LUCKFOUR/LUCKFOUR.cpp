#include <iostream>
#include <string>

int main(){
    int a;
    std::cin >> a;
    while (a > 0)
    {
        std::string str;
        std::cin >> str;
    
        int count = 0;
        for (int i = 0; i < str.length(); i++) {
            if(str[i] == 52) {
                count++;
            };
        };
        std::cout << count << std::endl;
        a--;
    }
    return 0;
}
