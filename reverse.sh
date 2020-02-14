echo enter a num
read num
rev=0
while [ $num  -gt  0  ]
do
k=`expr  $num  \%  10`
l=`expr   $rev  \*  10`
rev=`expr  $l  +  $k`
num=`expr  $num  /  10`
done
echo reverse number is $rev
exit 0
