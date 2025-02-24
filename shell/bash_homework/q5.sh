#!/bin/bash

for file in *.txt; do
	cp $file $file.bak
	echo "File copied succesfully"
done

