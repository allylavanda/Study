#include <iostream>

int main(){
    double tempf, tempc;
    
    std::cout << "Enter in the temperature you would like to convert to celius: ";
    std::cin >> tempf;

    tempc = (tempf -32) / 1.8;
    std::cout << "The temp is " << tempc << " degrees Celsius.\n";

}