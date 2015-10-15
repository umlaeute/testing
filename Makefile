.PHONY: all clean

all: helloworld
	file $^

clean:
	rm -rf helloworld helloworld.exe
