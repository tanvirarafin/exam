#!/bin/bash
touch flag4
echo "Morgan State University" > newfile
echo "EEGR 480" >> newfile
grep Morgan  newfile > flag4
