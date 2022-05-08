//input.cpp
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>


int main(){
   //using string fstream
   //to input and output 
   //file
   std::ifstream infile("input.txt");
   std::ofstream outfile("output.txt");
  
   int count, number;
   std::string line;
   std:: string striline;
   
   std::stringstream convert;
   std::stringstream ss;
   
   
   if(infile.is_open()){             //checking if the file is open
       
     while(!infile.eof()){          // making sure that the is the beigening of the file
        number=0;
        getline(infile, line, ',');  //read the first coloum     

             convert << line;
	     if(line.empty())      //checking if the line is empty
		break;
                                 //extracting the string line in the stringstream convert
             convert >> count;              //read as an integer
             number = number + count;       //increasing the number
             convert.clear();               // clearing the convert 
             convert.str("");              //get and set string as an and assign data to convert
             ss << line;                   // extracting the string line in ss
          
        
        getline(infile, line, ',');     //read the second colum
              
             convert << line;               //extracting the line in the convert
             convert >> count;              //convert to an int
             number = number + count;
             convert.clear();              //clear the string stream convert
             convert.str("");
             ss << line;     
            
             
     
        getline(infile, line);         //read the third colum
             
            convert << line;             //extract string line
                                         
            convert >> count;           //convert to an int
            number = number + count;   
            convert.clear();
            convert.str("");
            ss << line;

         


       getline(infile, striline);   //this getline will read only the string infile
           ss.clear();
       for(int i=0; i < number; i++){ 
           if(i!=0)                 //check if i != 0 print the comma in the outfile
                                    //otherwise it'll print comma before
		outfile<<',';
           outfile << striline;
                   
           
          
       
       }
	outfile<<std::endl;
      
           striline.clear();
           line.clear();
          
          
     }   

 }
   infile.close();
   outfile.close();


}
