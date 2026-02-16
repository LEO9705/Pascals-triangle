#include <iostream>
int main(){
    int height = 5;
    int p0=1, p1=0, p2=0, p3=0, p4=0;

    for (int row = 1; row <= height; row++) {

        if (row >= 5) p4 = p4 + p3;
        if (row >= 4) p3 = p3 + p2;
        if (row >= 3) p2 = p2 + p1;
        if (row >= 2) p1 = p1 + p0;
        
        std::cout << p0;
        if (row >= 2) std::cout << " " << p1;
        if (row >= 3) std::cout << " " << p2;
        if (row >= 4) std::cout << " " << p3;
        if (row >= 5) std::cout << " " << p4;
        std::cout << '\n';
    }
}