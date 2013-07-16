all: blackjack

blackjack: main.o blackjack.o
	g++ main.o blackjack.o -o blackjack

main.o: main.cpp
	g++ -c main.cpp

blackjack.o: blackjack.cpp
	g++ -c blackjack.cpp

clean:
	rm -rf *.o blackjack