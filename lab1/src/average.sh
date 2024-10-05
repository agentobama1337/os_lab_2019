#!/bin/bash

n=$#
sum=0

for var in $*
do 
sum=$(($sum+$var))
done

echo "Кол-во чисел: $n"
echo "Среднее арифметическое: $(($sum/$n))"
