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
	echo "backup already exists"
else
	echo
	#mkdir "${userHome}backup"
fi



#Part 3
echo "Number of files and directories: $(ls -1 | wc -l)"
totalBytes=0
for file in $(ls -1)
do
	if [ -f "${file}" ]
	then
		#Can't figure out how to access just first part other than this way
		wasNum=0
		for part in $(wc -c ${file})
		do
			if [ ${wasNum} -eq "0" ]
			then
				let "totalBytes += ${part}"
				wasNum=1
			else
				wasNum=0
				continue
			fi
			
		done
	fi
done
echo "Total bytes (disk usage) of files and directories: ${totalBytes}"
