#!/bin/bash

# Compile my program
clang main.c -o clamp

# Check if compilation is Successfull
if [ $? -ne 0 ]; then
	echo "Compilation failed"
	exit 1
fi

echo "Compiation Successful. Running the program..."

./clamp <<EOF
22:08:1:0:0 path/to/success
EOF

