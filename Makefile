CXXFLAGS =	-O2 -g -Wall

SOURCES = src/main.cpp src/BinaryTree.cpp
OBJS =		$(SOURCES:.cpp=.o)
LIBS =
TARGET =	main
	
all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $< -o $@
	
$(TARGET):	$(OBJS)
	$(CXX) $(OBJS) -o $@
	
