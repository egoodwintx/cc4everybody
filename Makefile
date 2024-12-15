# C for Everyone Lesson Plan Makefile
# Todo: change compiler based on platform (cc in Freebsd)

CC="cc"  # FreeBSD
# CC="gcc" # Linux
all:
	make lesson1 lesson2 lesson3
	make lesson4 lesson5 lesson6
	make lesson7 lesson8 lesson9
	make lesson10 lesson11

lesson1:
	echo "No source code in lesson 1"

lesson2:
	echo "Compiling all lesson 2 source code"
	$(CC) -g -o ./bin/ch2test ./src/lesson2/ch2test.c
	$(CC) -g -o ./bin/exRS1 ./src/lesson2/exRS1.c
	$(CC) -g -o ./bin/exRS2 ./src/lesson2/exRS2.c
	$(CC) -g -o ./bin/exRS3 ./src/lesson2/exRS3.c
	$(CC) -g -o ./bin/exRS4 ./src/lesson2/exRS4.c
	$(CC) -g -o ./bin/exRS5 ./src/lesson2/exRS5.c
	$(CC) -g -o ./bin/exRS6 ./src/lesson2/exRS6.c
#	$(CC) -g -o ./bin/exRS7 ./src/lesson2/exRS7.c
#	$(CC) -g -o ./bin/exRS8 ./src/lesson2/exRS8.c
#	$(CC) -g -o ./bin/exRS9 ./src/lesson2/exRS9.c

lesson3:
	$(CC) -g -o ./bin/ex1_1 ./src/lesson3/ex1_1.c
	$(CC) -g -o ./bin/ex1_3 ./src/lesson3/ex1_3.c
	$(CC) -g -o ./bin/ex1_4 ./src/lesson3/ex1_4.c
	$(CC) -g -o ./bin/ex1_5 ./src/lesson3/ex1_5.c
	$(CC) -g -o ./bin/ex1_6 ./src/lesson3/ex1_6.c
	$(CC) -g -o ./bin/ex1_7 ./src/lesson3/ex1_7.c
	$(CC) -g -o ./bin/ex1_10 ./src/lesson3/ex1_10.c
	$(CC) -g -o ./bin/ex1_17 ./src/lesson3/ex1_17.c
	$(CC) -g -o ./bin/ex3_1 ./src/lesson3/ex3_1.c
	$(CC) -g -o ./bin/ex3_4 ./src/lesson3/ex3_4.c

lesson4:
	$(CC) -g -o ./bin/ex2_2 ./src/lesson4/ex2_2.c
	$(CC) -g -o ./bin/ex2_10 ./src/lesson4/ex2_10.c
	$(CC) -g -o ./bin/LBS8 ./src/lesson4/LBS8.c

lesson5:
	$(CC) -g -o ./bin/ex3_1 ./src/lesson5/ex3_1.c
	$(CC) -g -o ./bin/ex3_4 ./src/lesson5/ex3_4.c
	$(CC) -g -o ./bin/ex3_6 ./src/lesson5/ex3_6.c
	$(CC) -g -o ./bin/LBS290_ex16 ./src/lesson5/LBS290_ex16.c

lesson6:
	$(CC) -g -o ./bin/ex4_A ./src/lesson6/ex4_A.c
	$(CC) -g -o ./bin/ex4_B ./src/lesson6/ex4_B.c
	$(CC) -g -o ./bin/ex4_C ./src/lesson6/ex4_C.c
	$(CC) -g -o ./bin/ex4_D ./src/lesson6/ex4_D.c
	$(CC) -g -o ./bin/LBS290_ex18 ./src/lesson6/LBS290_ex18.c

lesson7:
	$(CC) -g -o ./bin/exRS10 ./src/lesson7/exRS10.c
	$(CC) -g -o ./bin/exRS11 ./src/lesson7/exRS11.c
	$(CC) -g -o ./bin/exRS12 ./src/lesson7/exRS12.c
	$(CC) -g -o ./bin/LBS98 ./src/lesson7/LBS98.c
	$(CC) -g -o ./bin/LBS290_13 ./src/lesson7/LBS290_13.c
	$(CC) -g -o ./bin/LBS290_14 ./src/lesson7/LBS290_14.c
	$(CC) -g -o ./bin/LBS290_15 ./src/lesson7/LBS290_15.c

lesson8:
	$(CC) -g -o ./bin/autograder6_0 ./src/lesson8/autograder6_0.c
	$(CC) -g -o ./bin/autograder6_A ./src/lesson8/autograder6_A.c
	$(CC) -g -o ./bin/autograder6_B ./src/lesson8/autograder6_B.c

lesson9:
	$(CC) -g -o ./bin/pythonstr ./src/lesson9/pythonstr_class.c
	$(CC) -g -o ./bin/pythonlist ./src/lesson9/pythonlist_class.c
	$(CC) -g -o ./bin/pythondict ./src/lesson9/pytabout:blank#blockedhondict_class.c

lesson10:
	$(CC) -g -o ./bin/pythondict_oop ./src/lesson10/pythondict_class.c
	$(CC) -g -g -o ./bin/iterator ./src/lesson10/iterator.c

lesson11:
	$(CC) -g -o ./bin/hashmap ./src/lesson11/hashmap.c
	$(CC) -g -o ./bin/linkedtreemap ./src/lesson11/linkedtreemap.c
	
clean:
	echo "Cleaning up ./bin/"
	rm -rf ./bin/*
