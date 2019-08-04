all: hello

hello: output.o
	g++ output.o -o hello

output.o: output.cpp
	g++ -c output.cpp

run:
	./hello

clean:
	rm -rf *.o hello