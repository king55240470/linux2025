#!bin/bash
hour='date+%H'
case $hour in
0[1-9] | 1[01])
echo "Good morning !!"
;;
1[234567])
echo "Good afternoon !!"
;;
*)
echo "Good evening !!"
;;
esac
