#!/bin/bash
case $1 in
  1) echo "1 5 3" > test_input.txt && echo "1 3 5" > expected_output.txt ;;
  2) echo "255 0 128" > test_input.txt && echo "0 128 255" > expected_output.txt ;;
  3) echo "10 20 10" > test_input.txt && echo "10 10 20" > expected_output.txt ;;
esac

./main test_input.txt
diff -q out.txt expected_output.txt || exit 1