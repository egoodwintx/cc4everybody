# C for Everyone Lesson Plan Makefile
# Todo: change compiler based on platform (cc in Freebsd)
all:
	make lesson1 lesson2 lesson3
	make lesson4 lesson5 lesson6
	make lesson7 lesson8 lesson9
	make lesson10

lesson1:
	echo "No source code in lesson 1"

lesson2:
	echo "Compiling all lesson 2 source code"
	gcc -o ./bin/ch2test ./src/lesson2/ch2test.c
	gcc -o ./bin/exRS1 ./src/lesson2/exRS1.c
	gcc -o ./bin/exRS2 ./src/lesson2/exRS2.c
	gcc -o ./bin/exRS3 ./src/lesson2/exRS3.c
	gcc -o ./bin/exRS4 ./src/lesson2/exRS4.c
	gcc -o ./bin/exRS5 ./src/lesson2/exRS5.c
	gcc -o ./bin/exRS6 ./src/lesson2/exRS6.c
	#gcc -o ./bin/exRS7 ./src/lesson2/exRS7.c
	#gcc -o ./bin/exRS8 ./src/lesson2/exRS8.c
	#gcc -o ./bin/exRS9 ./src/lesson2/exRS9.c

lesson3:
	gcc -o ./bin/ex1_1 ./src/lesson3/ex1_1.c
	gcc -o ./bin/ex1_3 ./src/lesson3/ex1_3.c
	gcc -o ./bin/ex1_4 ./src/lesson3/ex1_4.c
	gcc -o ./bin/ex1_5 ./src/lesson3/ex1_5.c
	gcc -o ./bin/ex1_6 ./src/lesson3/ex1_6.c
	gcc -o ./bin/ex1_7 ./src/lesson3/ex1_7.c
	gcc -o ./bin/ex1_10 ./src/lesson3/ex1_10.c
	gcc -o ./bin/ex1_17 ./src/lesson3/ex1_17.c
	gcc -o ./bin/ex3_1 ./src/lesson3/ex3_1.c
	gcc -o ./bin/ex3_4 ./src/lesson3/ex3_4.c

lesson4:
	gcc -o ./bin/ex2_2 ./src/lesson4/ex2_2.c
	gcc -o ./bin/ex2_10 ./src/lesson4/ex2_10.c
	gcc -o ./bin/LBS8 ./src/lesson4/LBS8.c

lesson5:
	gcc -o ./bin/ex3_1 ./src/lesson5/ex3_1.c
	gcc -o ./bin/ex3_4 ./src/lesson5/ex3_4.c
	gcc -o ./bin/ex3_6 ./src/lesson5/ex3_6.c
	gcc -o ./bin/LBS290_ex16 ./src/lesson5/LBS290_ex16.c

lesson6:
	gcc -o ./bin/ex4_A ./src/lesson6/ex4_A.c
	gcc -o ./bin/ex4_B ./src/lesson6/ex4_B.c
	gcc -o ./bin/ex4_C ./src/lesson6/ex4_C.c
	gcc -o ./bin/ex4_D ./src/lesson6/ex4_D.c
	gcc -o ./bin/LBS290_ex18 ./src/lesson6/LBS290_ex18.c

lesson7:
	gcc -o ./bin/exRS10 ./src/lesson7/exRS10.c
	gcc -o ./bin/exRS11 ./src/lesson7/exRS11.c
	gcc -o ./bin/exRS12 ./src/lesson7/exRS12.c
	gcc -o ./bin/LBS98 ./src/lesson7/LBS98.c
	gcc -o ./bin/LBS290_13 ./src/lesson7/LBS290_13.c
	gcc -o ./bin/LBS290_14 ./src/lesson7/LBS290_14.c
	gcc -o ./bin/LBS290_15 ./src/lesson7/LBS290_15.c

lesson8:
	gcc -o ./bin/autograder6_0 ./src/lesson8/autograder6_0.c
	gcc -o ./bin/autograder6_A ./src/lesson8/autograder6_A.c
	gcc -o ./bin/autograder6_B ./src/lesson8/autograder6_B.c

lesson9:
	gcc -o ./bin/pythonstr ./src/lesson9/pythonstr_class.c
	gcc -o ./bin/pythonlist ./src/lesson9/pythonlist_class.c
	gcc -o ./bin/pythondict ./src/lesson9/pythondict_class.c

lesson10:
	gcc -o ./bin/pythondict_oop ./src/lesson10/pythondict_class.c
	gcc -o ./bin/iterator ./src/lesson10/iterator.c

clean:
	echo "Cleaning up ./bin/"
	rm -rf ./bin/*
