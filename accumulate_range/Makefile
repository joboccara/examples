CXXFLAGS += -std=c++11

accumulate: accumulate.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

run: accumulate
	./accumulate

clean:
	rm -f accumulate
