prime()
{
flag=1
j=2
while [ $j -le `expr $1 / 2` ]
do
if [ `expr $1 % $j` -eq 0 ]
then
flag=0
break
fi
j = `expr $j + 1`
done
if [ $flag -eq 1 ]
then
return 1
else
return 0
fi
}
prime $1
if [ $? -eq 1 ]
then
echo "$1 is a prime!"
else
echo "$1 is not a prime!"
fi
