//streamFile.cpp
#include <iostream>
#include <fstream>
#include <sstream>



int main(){
 
  std::ifstream infile("input.txt");
  std::string line;
  int counter, i;
  while(getline(infile, line)){
      std::stringstream ss(line);
      ss>>i;
      counter+=i;
     // getline(ss, line, ',');
      std::cout << counter;
      std::cout << std::endl;
  }









/*  
  std::cout << "Enter the file name: " << endl;

  std::cin >> name;

  fileName.open(name.c_str(), ios::in);

  if(!fileName.is_open())
   {
         std::cerr << "File doesn't exist" << endl;
    }


    while(getline(fileName, counter)){
    
            fileName >> counter;
            sum += counter;
            std::cout << "the sum: ";

     } //end while

     fileName.close();
*/
}//end main
