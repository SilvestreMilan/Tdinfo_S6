CFLAGS=-c -g
LDFLAGS=
EXEC=test_lifo2 test_fifo2 test_fifo1 test_lifo1 test_lifo3 test_fifo3 test_printf_fifo.c

all: $(EXEC)

test_lifo1: test_lifo1.o lifo.o list.o element.o
	clang  -o $@ $^ $(LDFLAGS)

test_lifo2: test_lifo2.o lifo.o list.o element.o
	clang  -o $@ $^ $(LDFLAGS)

test_lifo3: test_lifo3.o lifo.o list.o element.o
	clang  -o $@ $^ $(LDFLAGS)

test_fifo1: test_fifo1.o fifo.o list.o element.o
	clang  -o $@ $^ $(LDFLAGS)

test_fifo2: test_fifo2.o fifo.o list.o element.o distribution.o
	clang  -o $@ $^ $(LDFLAGS)

test_fifo3: test_fifo3.o fifo.o list.o element.o distribution.o
	clang  -o $@ $^ $(LDFLAGS)

test_printf_fifo : test_printf_fifo.o fifo.o list.o element.o
	clang  -o $@ $^ $(LDFLAGS)

%.o: %.c
	clang $(CFLAGS) $<

clean :
	rm -f *.o $(EXEC)
