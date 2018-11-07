#!/bin/bash

echo "Calificar"
echo "- para salir"

read nCalif

while [ $nCalif -ne -1 ]
do

	if[$nCalif -ge 0 and $nCalif -le 60] 
	then
		echo "F"
	fi

	read nCalif


done

echo "Termino Ejecucion Programa"


