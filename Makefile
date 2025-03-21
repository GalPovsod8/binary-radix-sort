CXX = g++
CXXFLAGS = -Wall -Wextra -O2
TARGET = dn1
SRC = main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: all
	./$(TARGET) input.txt

clean:
	rm -f $(TARGET) out.txt
