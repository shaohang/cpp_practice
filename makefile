show.o: show.cpp
	g++ -c show.cpp -o show.o

system_test: system_test.cpp show.o
	g++ system_test.cpp show.o -o system_test
