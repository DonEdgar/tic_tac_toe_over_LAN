tt_game: board.o main.o
	gcc board.o main.o -o tt_game


main.o: main.c
	gcc -c main.c

board.o: board.c board.h
	gcc -c board.c

clean:
	rm -f *.o tt_game
