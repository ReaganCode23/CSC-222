#!/bin/bash

read -p "Enter your password" password

if [[ ! "$password" =~ [A-Z] ]]; then
	echo "Pasword is invalid"
 elif [[ ! "$password" =~ [a-z] ]]; then
	echo "Password is invalid" 
 elif [[ ! "$password" =~ [0-9] ]]; then
	echo "Password is invalid"
 elif [[ ! "$password" =~ ["!@#$%^&*()_+"] ]]; then
	echo "Password is invalid"
 elif [[ ! "$password" =~ {8,} ]]; then
	echo "Password is invalie"
 else
	echo "Password is valid"
fi
