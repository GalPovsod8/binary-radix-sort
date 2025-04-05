#!/bin/bash
case $1 in
  1) echo "1 5 3" > input.txt && echo "1 3 5" > out.txt ;;
  2) echo "255 0 128" > input.txt && echo "0 128 255" > out.txt ;;
  3) echo "10 20 10" > input.txt && echo "10 10 20" > out.txt ;;
esac

./dn1 input.txt
diff -q out.txt out.txt || exit 1