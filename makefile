TARGET=priority_implementation

all:	$(TARGET)

clean:
	rm -f $(TARGET)

test:	$(TARGET)
	./$(TARGET)

$(TARGET):	$(TARGET).cpp
	$(CXX) -o $@ $< $(CFLAGS)
