#!/bin/bash

# Compile my program
clang main.c -o clamp

# Check if compilation is Successfull
if [ $? -eq 0 ]; then
	echo "Compilation Successfull, Running program..."
	./clamp
else
	echo "Compilation failed"
fi

