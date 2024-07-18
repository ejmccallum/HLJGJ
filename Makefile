# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++11 $(addprefix -I,$(MODULES)) -I/usr/include

# Linker flags
LDFLAGS = -L/usr/lib/x86_64-linux-gnu -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

# Target executable
TARGET = bin/main.exe

# Directories
MODULES = main States Assets Inputs Game Definitions
OBJDIR = obj

# Source and object files
SRCFILES = $(foreach dir, $(MODULES), $(wildcard $(dir)/*.cpp))
OBJFILES = $(patsubst %.cpp,$(OBJDIR)/%.o,$(SRCFILES))

# Default rule
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJFILES)
	@mkdir -p $(dir $(TARGET))
	$(CXX) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

# Rule to build object files
$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to run the program
run: $(TARGET)
	./$(TARGET)

# Clean rule
clean:
	-rm $(OBJFILES) $(TARGET)

# Phony targets
.PHONY: all clean run
