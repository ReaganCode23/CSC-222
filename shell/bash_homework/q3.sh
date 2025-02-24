#!/bin/bash

read -p "Enter a number please" num1
read -p "Enter another number please" num2
read -p "Choose an operation (+,*,/,-)" operator

case $operator in
	+)
	  result=$((num1 + num2))
	  ;;
	-)
	  result=$((num1 - num2))
	  ;;
	\*)
	  result=$((num1 * num2))
          ;;
	/)
	  result=$((num1 / num2))
	  ;;
esac

echo "The result of $num1 $operator $num2 is: $result"
