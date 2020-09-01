CC=gcc
CFLAGS=-Wall -O3
TARGET=main
SRCS=main.c

all:
	mkdir -pv build
	${CC} ${CFLAGS} ${SRCS} -o ./build/${TARGET}

clean:
	rm -rf ./build

rebuild:
	${CC} ${CFLAGS} ${SRCS} -o ./build/${TARGET}
	rm -f ./build/${TARGET}

