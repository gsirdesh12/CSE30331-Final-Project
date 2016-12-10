# CSE30331-Final-Project

Gaurav Sirdeshpande (gsirdesh)

This project implements a binary heap in both C++ and Java programming languages.

To run programs:

C++ Binary Heap Implementation:
    Run make, then ./binary_heap

Java Binary Heap Implementation:
    Compile program with javac BinaryHeap.java
    Run program with java BinaryHeap


Benchmarking (Time in seconds)

Java	           10	        100	       1000	      10000	     100000	    1000000	  100000000
Insert 	0.000010713	0.000043642	0.000405993	0.001381869	0.004630419	0.012168696	0.025586378
Remove	0.000013061	0.000179698	0.001313732	0.003347953	0.013731987	0.048223138	0.424916415
Search	0.00003814	0.000035152	0.000028884	0.000030181	0.000027132	0.00002519	0.000027021

C++	          10	     100	       1000	      10000	    100000	  1000000	100000000
Insert	1.30E-05	2.72E-05	0.000480619	0.000497548	0.00535987	0.0451491	 0.491502
Remove	1.66E-06	3.07E-05	  0.0045983	  0.0046064	   0.04991	 0.594034	  6.89664
Search	1.91E-05	1.79E-05	   1.77E-05	   1.76E-05	  2.77E-05	 3.02E-05	 2.63E-05

What was surprising is that, from the results above, it can be seen that Java was actually faster than C++ in this implementation. This could be because Java uses the JIT (just in time) compiler which basically queries the machine to optimize on runtime. C++ usually compiles beforehand using a combination of optimizations so that it can run on anything.
