#!/bin/sh
echo "Celcius a Farenheit "

read ntemp

echo "$((32+ $ntemp*9/5.0))"
