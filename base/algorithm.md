The goal: Writting a program that expected an input file contains
          a lines of integers and strings, sum the ints line and output
          as strings seperated by commas.

The Input: Summate the integers in the existing file.

The Output: Lines of strings in new file.

The steps:
          First, include iostream, fstream, string, and sstream
          Second, creating int main()
          -> inside main
              using fstream to open input in file and output in another file
              
              set 2 intgers, counter that will count the converted integers
              number that will read the intgers from file
              
             using stringstream to convert the string in the input file
             to an integers
        
             using if statment to check if the file is open which is the input 
             file from the
             
             using a while loop to check that is not the end of the file
                
              ->inside while loop
                    set the counter to zero so every time it itterate 
                    through the line in the line it set back to zero

                    using 1th getline to read the first coloum of the file
                    and print out only integers
                    
                    using stringstream extract the string with "<<" operater
             
                    check if the lines in the file are empty to break out of 
                    the loop otherwise it will print extra spaces

                    using stream read the numbers in the line and print them out as an integers
                 
                    accumilate to the counter
    
                    clear the stringstream after the conversion
            
                    set stringstream converter to str() method
                     
                    use second getline to read the second colum of the file
                    
                    again extract the string in the stringstream
                    convert to integer
                    
                    accumulate to the counter
                    clear the string
                    string stream converter to str() method

                    
                   use the third getline to read the last colum of the file
                   again extract the convert line
                   
                   acumilate to the counter
                   clear the stringstream
                   using .st() method
                   
                   use getline for one last time that will read only
                   the strings
                   
                      using for loop through the file input and check
                        if it is less than counter it would print out that 
                        amout of number as string and output.Also
                        using if statment to check if i!=0 so it will not 
                        print out any comma at the begening of the first
                        line in this new file which is output file. For example, if counter = 6
                        then the string = doc,doc,doc,doc,doc,doc
                      
                      
                   end the for loop

       end the while loop

end main
               
                    
             
