// Name        : main.cpp
// Author      : dim
// Version     : 1.1.1
// Copyright   : Your copyright notice
// Description : Address from in.txt file to out.txt file in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>

class Address {
private:
    std::string town;
    std::string street;
    int bildNum;
    int apartNum;


public:
    Address() : town(""), street(""), bildNum(0), apartNum(0) {}
    Address (const std::string &town, const std::string &street, int bildNum, int apartNum ) {
        this -> town = town;
        this -> street = street;
        this -> bildNum = bildNum;
        this -> apartNum = apartNum;
    }

    std::string getOutputAddress() {
        return town + ", " + street + ", " + std::to_string(bildNum) + ", " + std::to_string(apartNum); 
    }

};
int main(int argc, char** argv) {

std::ifstream file_in ("in.txt");
	int size_massive;
	if(!file_in.is_open()){
        std::cout << "No file in.txt" << std::endl;
        return 1;
    }
    file_in >> size_massive;
    Address* addr = new Address[size_massive];

    for (int i = 0; i < size_massive; i++)
    {
        std::string town, street;
        int bildNum, apartNum;
        file_in >> town >> street >> bildNum >> apartNum;
        addr[i] = Address(town, street, bildNum, apartNum);
    }
    
    file_in.close();
    

    std::ofstream file_out("out.txt");
    file_out << size_massive << std::endl;

    for (int i = size_massive - 1; i >= 0; i--) 
    {
        file_out << addr[i].getOutputAddress() << std::endl;
    }
    //file_out << "\n";
    file_out.close();
    delete[] addr;

return 0;

}
