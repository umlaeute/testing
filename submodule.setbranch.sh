#!/bin/sh

git submodule foreach -q --recursive \
	'git config -f $toplevel/.gitmodules submodule.$name.branch | xargs -r git checkout'
