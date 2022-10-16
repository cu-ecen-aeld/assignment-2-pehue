ifeq ($(CROSS_COMPILE), aarch64-none-linux-gnu-)
	CC = aarch64-none-linux-gnu-gcc
else
	CC = gcc
endif
CFLAGS=-g -Wall -ggdb3 -std=gnu99 -pedantic
#CFLAGS=-Wall -Werror -ggdb3 -std=gnu99 -pedantic $(OTHERFLAGS)
writer: writer.c
		$(CC) $(CFLAGS) -o $@ $<
clean:
		rm -rf writer

