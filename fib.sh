 echo enter the number of terms
read n
f1=0
f2=1
i=1
echo  $f1
echo  $f2
while [  $i  -le  $n  ]
do
f3=`expr  $f1  +  $f2`
f1=$f2
f2=$f3
i=`expr  $i  +  1`
echo  $f3
done
exit 0
