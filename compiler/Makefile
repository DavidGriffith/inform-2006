all: inform

SOURCE = \
	arrays.o asm.o bpatch.o chars.o directs.o errors.o expressc.o expressp.o \
	files.o inform.o lexer.o linker.o memory.o objects.o states.o symbols.o \
	syntax.o tables.o text.o veneer.o verbs.o

inform_w32: CFLAGS = -mno-cygwin -O2 -DPC_WIN32
inform_w32: $(SOURCE)
	$(CC) -mno-cygwin -s -o $@ $^

inform: CFLAGS = -O2 -DUNIX
inform: $(SOURCE)
	$(CC) -o $@ $^

clean:
	rm -f *.o

get:
	cvs co inform
