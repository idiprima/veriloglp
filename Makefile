CXX = g++
CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

SRC_DIR = ./src
INC_DIR = ./include
OBJ_DIR = ./obj
TARGET = veriloglp


SRC = $(SRC_DIR)/*.cpp 

$(TARGET) : $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) -I $(INC_DIR) $(SRC)

all:	$(TARGET)

clean:
	rm -f $(TARGET)

