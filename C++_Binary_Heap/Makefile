CXX=		g++
CXXFLAGS=	-g -Wall -std=gnu++11
SHELL=		bash
PROGRAMS= binary_heap

all:		$(PROGRAMS)

binary_heap: binary_heap.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(PROGRAMS)

test:		test-output test-memory test-time

test-output:	$(PROGRAMS)
	@echo "Testing output (binary_heap)..."
	@diff --suppress-common-lines -y <(./binary_heap -b) output

# test-memory:	$(PROGRAMS)
#	@echo "Testing memory (binary_heap)..."
#	@[ `valgrind --leak-check=full ./binary_heap -b      < input 2>&1 | grep ERROR | awk '{print $$4}'` = 0 ]
