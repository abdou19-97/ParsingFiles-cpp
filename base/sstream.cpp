#include <sstream>
#include <iostream>
#include <string>
//sstream.cpp

//using sstream to convert int to string

int main(){
 
   
   std::string strinput = "45,0000"; 
   
   
   // creating sstream
   // to convert string to int
    std::stringstream ss;
    //using insertion oprator
    //to the strinput to ss
    ss << strinput;
    int input;
    // using extraction oprator
    // to read the data as an int
    ss >> input;
    input++;      
    std::cout << getline(ss, strinput) << strinput << std::endl;
    std::cout <<  "the int is: " << input << std::endl;
       
 
    return 0;
} //end main
