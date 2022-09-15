CC = g++
Exercise2:
	echo "Running 1.5"
	cd Exercise-2 && g++ Ex1-5.cpp -o Ex1-5 && ./Ex1-5
	echo "Running 1.11 For"
	cd Exercise-2 && g++ Ex1-11For.cpp -o Ex1-11For && ./Ex1-11For
	echo "Running 1.11 While"
	cd Exercise-2 && g++ Ex1-11while.cpp -o Ex1-11while && ./Ex1-11while

