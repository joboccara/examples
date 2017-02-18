CXXFLAGS += -std=c++11

merge_adjacent: merge_adjacent.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

run: merge_adjacent
	./merge_adjacent

clean:
	rm -f merge_adjacent
