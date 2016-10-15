#
# Makefile for rASCIIng
#
CXX      = g++

racing: game.cpp map.cpp parse.cpp print_racing.cpp rASCIIng.cpp game.h map.h parse.h print_racing.h
	${CXX} -o racing game.cpp map.cpp parse.cpp print_racing.cpp rASCIIng.cpp

<<<<<<< HEAD
racing_linux:  game.cpp map.cpp parse_linux.cpp print_racing.cpp rASCIIng.cpp game.h map.h parse.h print_racing.h
	${CXX} -o racing_linux game.cpp map.cpp parse_linux.cpp print_racing.cpp rASCIIng.cpp
=======
racing_mac: game_mac.cpp map.cpp parse_ncurses.cpp print_racing.cpp rASCIIng.cpp game.h map.h parse.h print_racing.h
	${CXX} -lncurses -o racing_mac game_mac.cpp map.cpp parse_ncurses.cpp print_racing.cpp rASCIIng.cpp

test_ncurses: test_ncurses.cpp
	${CXX} -lncurses -o test_ncurses test_ncurses.cpp
>>>>>>> 0ee6962c9cb1e338b2daea4c8b329ec4a002e6a7
