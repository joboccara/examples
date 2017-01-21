
istream_print_squares: istream_print_squares.cpp
	$(CXX) $(CXXFLAGS) -std=c++11 -o $@ $<

run: istream_print_squares
	echo "1 2 3 4 10 100" | ./istream_print_squares

clean:
	rm -f istream_print_squares
