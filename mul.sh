echo -n "Enter the first number : "
read num1
echo -n "Enter the second number : "
 
read num2
 
mul=`expr $num1 \\* $num2`
echo "multiplication of two values is $mul"
