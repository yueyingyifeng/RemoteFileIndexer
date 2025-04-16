#include <iostream>
#include <filesystem>

using namespace std;
using namespace filesystem;

int main(int, char**){

    path p("./bin/aaa");
    if(exists(p))
        cout << "folder exists" << p << endl;
    else
        cout << "folder not exits" << p << endl;
    
    std::cout << "Hello, from RFI_Client!\n";
}
