#!/bin/bash

if [ -f "$1" ]; then #spaces are important
	echo "parameter $1 is a file"
else
	echo "paramter $1 is not a file"

fi
