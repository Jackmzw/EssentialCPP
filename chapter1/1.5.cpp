#include <iostream>
#include <string>

int main(){
    std::string user_name;
    std::cout << "Please enter your name: ";
    std::cin >> user_name;
    std::cout << '\n';
    if(user_name.size() < 2)
    {
        std::cerr << "User name has to be at least two characters in length!\n";
    }
    else
    {
        std::cout << "Hello, " << user_name << '.' << std::endl;
    }
    return 0;
}


