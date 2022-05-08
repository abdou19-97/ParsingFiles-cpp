#include <iostream>
#include <sstream>
#include <string>
#include <fstream>


int main(){

   std::ifstream infile("input.txt");
   std::ofstream outfile("output.txt");

   int count, number;
   std::string line;
   std:: string striline;

   std::stringstream convert;
   std::stringstream ss;
   if(infile.is_open()){

     while(!infile.eof()){
      
           if(line.empty())
              break;
      
       /*
        getline(infile, line, ',');

             convert << line;
             convert >> count;
             number = number + count;
             convert.clear();
             convert.str("");
             ss << line;


        getline(infile, line, ',');

             convert << line;

             convert >> count;

             number = number + count;
             convert.clear();
             convert.str("");
             ss << line;



        getline(infile, line);

            convert << line;
            convert >> count;
            number = number + count;
            convert.clear();
            convert.str("");
            ss << line;
              



       getline(infile, striline);
           ss.clear();
      */
       for(int i=0; i <= number; i++){
           
           if(i != 0)
             outfile << ','; 
            outfile << striline;
                 



       }

           striline.clear();
           line.clear();


     }

 }
   infile.close();
   outfile.close();


}

                 
           
























