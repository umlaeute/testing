#!/bin/sh


date >> $0

git commit -m "self-modifying script $0 stroke back" "${0}"
exit 0

## here comes the foo
