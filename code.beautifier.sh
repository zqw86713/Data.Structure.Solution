#!/bin/bash

 for i in {6..10}
 do
            echo "Welcome to chapter.$i"
            cd Chapter.$i
            # ls > checklist.txt
            # uncrustify -c ~/.uncrustify/linux.cfg --replace\
            #        -F checklist.txt
            rm *~
            cd ..
done
