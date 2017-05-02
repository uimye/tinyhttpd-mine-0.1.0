CC = mipsel-openwrt-linux-gcc
CFLAGS = -O2 -Wall -I ..

all: cgi_mine 

cgi_mine: cgiMine.c
	$(CC) $(CFLAGS) -o cgi_mine cgiMine.c

clean:
	rm -f cgi_mine *~
