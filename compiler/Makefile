all: inform

SOURCE = \
	arrays.o asm.o bpatch.o chars.o directs.o errors.o expressc.o expressp.o \
	files.o inform.o lexer.o linker.o memory.o objects.o states.o symbols.o \
	syntax.o tables.o text.o veneer.o verbs.o

infrmw32: CFLAGS = -mno-cygwin -O2 -DPC_WIN32
infrmw32: $(SOURCE)
	$(CC) -mno-cygwin -s -o $@ $^

inform: CFLAGS = -O2 -DUNIX
inform: $(SOURCE)
	$(CC) -o $@ $^

clean:
	rm -f *.o

get:
	cvs checkout inform

getftp:
	wget --timestamping --recursive --passive-ftp ftp://inform63:makers@plover.net/public_html

