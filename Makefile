# Makefile

# TARGET=basic_program
# $(TARGET): main.c
# 	cc -o basic_program main.c

CC := gcc
LDFLAGS :=
C_SOURCES :=$(wildcard *.c)
C_EXECUTABLE :=$(C_SOURCES:.c=)

.PHONY : help
help :
	@echo "clean : remove auto-generated files"
	@echo "compile : compile c files"

.PHONY: clean
clean:
	echo "remove auto-generated files"
	rm -rf *.dSYM *.o

compile:
	echo "compiling programs"
	$(C_EXECUTABLE):$(C_SOURCES)
		$(CC) $< $(LDFLAGS) -o $@

