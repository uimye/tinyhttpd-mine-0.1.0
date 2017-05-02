all: httpd

httpd: httpd.c
	mipsel-openwrt-linux-gcc -W -Wall -lpthread -o httpd httpd.c

clean:
	rm httpd
