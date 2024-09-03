#!/bin/bash
cat /etc/passwd | grep -v '^#' | awk 'NR%2==0' | awk -F ':' '{ print $1 }' | rev | awk -v db="$FT_LINE1" -v fi="$FT_LINE2" 'NR >= 5 && NR <= 10 { printf "%s, ", $0 }' | sed 's/, $/./' | tr -d '\n'
