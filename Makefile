# Makefile

CC := gcc
LDFLAGS =
SRC :=$(wildcard *.c)
OBJ = $(SRC:.c=.o)

.PHONY : help
help :
	@echo "clean : remove auto-generated files"
	@echo "hello : compile c files"
	@echo "func : compile c files"

.PHONY: clean
clean:
	echo "remove auto-generated files"
	rm -rf *.dSYM *.o hello func

hello:
	echo "compiling hello.c"
	$(CC) hello.c -o hello

func:
	echo "compiling func.c"
	$(CC) func.c -o func

multiple: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)
