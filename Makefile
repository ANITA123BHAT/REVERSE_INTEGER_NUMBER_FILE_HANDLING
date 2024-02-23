
#Makefile 

CC=g++
CFLAGS=-Wall
INCLUDE_DIR=include
SRC_DIR=src

main: main.o $(SRC_DIR)/find_reverse_of_integer_num.o 
	$(CC) $(CFLAGS) main.o $(SRC_DIR)/find_reverse_of_integer_num.o -o main

main.o: main.cpp $(INCLUDE_DIR)/reverse_number.h
	$(CC) $(CFLAGS) -c main.cpp -o main.o 

$(SRC_DIR)/find_reverse_of_integer_num.o: $(SRC_DIR)/find_reverse_of_integer_num.cpp $(INCLUDE_DIR)/reverse_number.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/find_reverse_of_integer_num.cpp -o $(SRC_DIR)/find_reverse_of_integer_num.o

clean:
	rm -r $(SRC_DIR)/*.o main
