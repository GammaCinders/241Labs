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
			echo "The number of files"
			echo "How many bytes"
		elif [ "${i}" == "-l" ]
		then
			echo "List all the files"
		elif [ "${i}" == "--help" ]
		then
			echo "How to run this script"
		fi
	done
fi



#Part 2
userHome=$(echo ~/)
if test -d "${userHome}backup"
then
	echo "~/backup already exists"
else
	echo
	#mkdir "${userHome}backup"
fi



#Part 3
echo "Number of files and directories: $(ls -1 | wc -l)"
echo "Total bytes (disk usage) of files and directories: $(du -b)" 
