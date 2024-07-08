CXXFLAGS="-std=c++14"

satTest: clean File.o Proof.o Solver.o satTest.o
	g++ -o $@ -g $(CXXFLAGS) File.o Proof.o Solver.o satTest.o

File.o: File.cpp
	g++ -c -g $(CXXFLAGS) File.cpp

Proof.o: Proof.cpp
	g++ -c -g $(CXXFLAGS) Proof.cpp

Solve.o: Solver.cpp
	g++ -c -g $(CXXFLAGS) Solver.cpp

satTest.o: satTest.cpp
	g++ -c -g $(CXXFLAGS) satTest.cpp

clean:
	rm -f *.o satTest tags
