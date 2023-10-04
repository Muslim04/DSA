#include <iostream>
#include <utility>

int main(){

    std::pair<int,std::string> pair1 {1,"One"};

    std::cout << "Key : " << pair1.first << " value : " << pair1.second << "\n";

    return 0;
}