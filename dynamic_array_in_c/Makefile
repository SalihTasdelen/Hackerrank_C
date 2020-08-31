CC=gcc
CFLAGS=-Wall -O3
TARGET=main
SRCS=main.c

all:
	mkdir -v build
	${CC} ${CFLAGS} ${SRCS} -o ./build/${TARGET}

clean:
	rm ./build/${TARGET}
	rmdir ./build

rebuild:
	${CC} ${CFLAGS} ${SRCS} -o ./build/${TARGET}
	rm ./build/${TARGET}

