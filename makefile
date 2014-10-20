COMPILER = g++
FLAGS = -g -std=c++0x -Wall -Ofast
OUTPUT_NAME = nn
DRIVER = NN
CODE = NeuralNet

all: $(CODE).o $(DRIVER).o
	$(COMPILER) $(FLAGS) -o $(OUTPUT_NAME) $(DRIVER).o $(CODE).o

test: runtest.o
	$(COMPILER) $(FLAGS) -o runtestspeed runtest.o 

runtest.cpp: runtest.o
	$(COMPILER) $(FLAGS) -c runtest.cpp 	

$(DRIVER).o : $(DRIVER).cpp
	$(COMPILER) $(FLAGS) -c $(DRIVER).cpp

$(CODE).o : $(CODE).cpp $(CODE).h
	$(COMPILER) $(FLAGS) -c $(CODE).cpp

clean:
	rm -rf *.o $(OUTPUT_NAME) 
