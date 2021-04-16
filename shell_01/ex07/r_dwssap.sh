#!/bin/bash
cat /etc/passwd | sed '/#.*$/d; s/:.*$//g; 1~2d' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2"p | tr '\n' " " | sed 's/ /, /g; s/, $/./g'