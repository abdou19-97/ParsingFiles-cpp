parseFile: input.o
	g++ input.o -o parseFile

input.o: input.cpp 
	g++ -c input.cpp
clean:
	rm -f *.0
	rm parseFile

run: parseFile
	/parseFile
