CC=gcc

metro: main.c kyiv.c
	$(CC) main.c kyiv.c -o metro

.PHONY: clean

clean:
	rm -f metro
