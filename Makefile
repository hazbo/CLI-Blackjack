all: blackjack

blackjack: main.o blackjack.o card.o
	g++ main.o blackjack.o card.o -o blackjack

main.o: main.cpp
	g++ -c main.cpp

blackjack.o: blackjack.cpp
	g++ -c blackjack.cpp

card.o: card.cpp
	g++ -c card.cpp

clean:
	rm -rf *.o blackjack