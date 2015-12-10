#!/bin/sh


date >> $0

git commit -m "self-modifying script $0 stroke back" "${0}"
exit 0

## here comes the foo
Don Dez 10 16:17:38 CET 2015
Don Dez 10 16:19:37 CET 2015
