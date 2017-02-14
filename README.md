
# Code Examples from CMSC 202

This repository contains examples that we covered in class and
may include additional tidbits that I think are worth sharing.

# Clarifications from class

Clarifications from lecture will be listed below.

## 2017-02-13

It turns out that `bash` does work as a hack version of changing your
shell, I was just checking the wrong variable to show that it worked.

    [jkukla1@linux1 cmsc202]$ echo $BASH
    BASH: Undefined variable.
    [jkukla1@linux1 cmsc202]$ bash
    [linux1] cmsc202> echo $BASH
    /bin/bash
    [linux1] cmsc202>

Voila!

# Useful links

* http://explainshell.com/ - A site where you can paste in a unix command and see what all the arguments do.
