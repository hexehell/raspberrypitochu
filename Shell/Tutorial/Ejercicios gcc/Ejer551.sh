#!/bin/sh
echo "Calcular Minutos"
echo "Horas "

read nHoras

echo "Minutos "

read nMinutos

echo "Total de Minutos:  "
 

echo \($nHoras\*60\)+$nMinutos| bc -l 