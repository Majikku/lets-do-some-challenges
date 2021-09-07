#include <iostream>


int main() {
    int T;
    std::cin >> T;
    while(T--){ 
        int a[5];
        int sumCheckedIn = 0;
        for(int i = 0; i<5; i++){
            std::cin >> a[i];
        }  

        sumCheckedIn = a[0] + a[1] + a[2];

        for(int i = 0; i<3; i++){
            if(a[i] <= a[4]){
                int sum = sumCheckedIn - a[i];
                if(sum <= a[3]){ std::cout << "YES" << std::endl; break; };
            }
            if(i==2){ std::cout << "NO" << std::endl; };
        }
    }
	return 0;
}

// 0,1,2
// 3,4