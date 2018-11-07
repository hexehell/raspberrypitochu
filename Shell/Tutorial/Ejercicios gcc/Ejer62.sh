#!/bin/sh
echo "Escribir los numeros Fibonacci"

echo "Hasta ? "

read nParar

echo 1
echo 1

i=2
j=1

while [[ $i -lt $nParar ]]; do
	#statements

	aux=$(($i+$j))

	echo $aux

	j=$i
	i=$aux



done
