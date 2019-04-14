CC=gcc
CFLAGS=-std=c99 -O3 -s -pipe -lm -Werror -Wall -Wextra -Wundef -Wshadow -Wconversion -Wunreachable-code -Wfloat-equal -Winit-self -Wformat=2

all: txt2bf clean
bfs: main.o
	$(CC) $? -o txt2bf $(CFLAGS)
%.o: %.c
	$(CC) -c $? -o $@ $(CFLAGS)
debug: CFLAGS+=-fsanitize=address
debug: all
clean:
	$(RM) *.o
