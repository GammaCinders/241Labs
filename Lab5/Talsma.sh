#! /bin/bash

#Part 1
if [ "${#}" == "0" ]
then
	echo "Not enough args"
	exit
else
	for i
	do
		if [ "${i}" == "-c" ]
		then
			echo "Number of files: $(ls -p | grep -v / | wc -l)"

			bytes=0
			for file in "$(ls -p | grep -v /)"
			do
				let "bytes += $(cat $(pwd)/${file} | wc -c)"
			done
			echo "Bytes used by files: ${bytes}"
		elif [ "${i}" == "-l" ]
		then
			echo "All files:"
			echo "$(ls)"
		elif [ "${i}" == "--help" ]
		then
			echo "-c : Print number of files and bytes used"
			echo "-l : Print all files"
			echo "--help : Print this help menu"
		fi
	done
fi



#Part 2
userHome=$(echo ~/)
if test -d "${userHome}backup"
then
	echo "backup already exists"
else
	echo
	#mkdir "${userHome}backup"
fi



#Part 3
echo "Number of files and directories: $(ls -1 | wc -l)"
echo "Total bytes (disk usage) of files and directories: $(wc -c ./)"
