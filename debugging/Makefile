CC = gcc
OFLAGS = -Og
CFLAGS = $(OFLAGS) -Wall -g

all: for_debug.o for_debug.s

for_debug.s:
	$(CC) $(CFLAGS) -S for_debug.c -o $@

for_debug.o:
	$(CC) $(CFLAGS) for_debug.c -o $@

clean:
	$(RM) for_debug.o for_debug.s
