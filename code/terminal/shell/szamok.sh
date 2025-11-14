#!/bin/sh
if [ $1 -gt $2 ]; then
	echo "$1 nagyobb."
else
	echo "$2 nagyobb."
fi
