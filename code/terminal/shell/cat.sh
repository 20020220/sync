#!/bin/sh
if [ `cat $1 | wc -c` -gt `cat $2 | wc -c` ]; then
	echo "$1-ben több karakter van."
else
	echo "$2-ben több character van."
fi
