.PHONY: all clean
default: all

clean all:
	make -C iemnet $@ PD_INCLUDE=$(shell pwd)/pd/src
