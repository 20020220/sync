if [ -s $1 ]; then
	darab=`cat $1 | grep -c $2`
	echo "$darab darab minta található"
fi
