#!/bin/bash

# Compile
gcc src/sjf.c -o sjf
if [ $? -ne 0 ]; then
  echo "Compilation failed"
  exit 1
fi

# Test 1
./sjf < tests/input1.txt > out1.txt
diff -w out1.txt tests/expected1.txt
if [ $? -ne 0 ]; then
  echo "Test 1 Failed"
  exit 1
fi

# Test 2
./sjf < tests/input2.txt > out2.txt
diff -w out2.txt tests/expected2.txt
if [ $? -ne 0 ]; then
  echo "Test 2 Failed"
  exit 1
fi

echo "All tests passed!"
