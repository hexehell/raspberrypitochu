#!/bin/sh
echo "Calcular Horas"

echo "Minutos "

read nMinutos

echo "Horas:"

nHoras=$(($nMinutos/60))

echo  $nHoras
echo "Minutos:"
 

echo \(\($nMinutos\/60\)-$nHoras\)\*60 | bc -l 