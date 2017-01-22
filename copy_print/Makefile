CXXFLAGS += -std=c++11

copy_print: copy_print.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

run: copy_print
	./copy_print

clean:
	rm -f copy_print
