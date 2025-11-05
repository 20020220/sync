#!/bin/sh

if [-f $1] 
then
	echo "$1 fájl"
else
	echo "$1 nem fájl"
fi
