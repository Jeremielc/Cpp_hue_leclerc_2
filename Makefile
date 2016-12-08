all : Main run clear


Complex :
	@g++ -c src/Complex.cpp -W -Wall -ansi -pedantic -o obj/Complex.o

Main : Complex
	@g++ -c src/Main.cpp -W -Wall -ansi -pedantic -o obj/Main.o
	@g++ obj/*.o -o bin/Complex

run :
	@./bin/Complex

clear :
	@rm -rf obj/*.o bin/*
