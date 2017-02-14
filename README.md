
# Code Examples from CMSC 202

This repository contains examples that we covered in class and
may include additional tidbits that I think are worth sharing.

# Clarifications from class

Clarifications from lecture will be listed below.

## 2017-02-13

### Changing your shell (the quick and dirty way)
It turns out that `bash` does work as a hack version of changing
your shell, I was just checking the wrong variable to show that it
worked!

    [jkukla1@linux1 cmsc202]$ echo $BASH
    BASH: Undefined variable.
    [jkukla1@linux1 cmsc202]$ bash
    [linux1] cmsc202> echo $BASH
    /bin/bash
    [linux1] cmsc202>

I _did_ find the answer for how to test this on stack overflow.  ;)

### Split-screen in emacs

* To split the emacs frame into two side-by-side windows, type `C-x 3` (that's hold-down-control-and-x,-then-let-go-and-hit-3)
* Use `C-x o` to bounce back and forth
* To start a unix shell inside one of them type `M-x ansi-term` (that's tap-escape-and-let-go,-then-hit-x-then-type-ansi-term)
** Inside the ansi-term window you have a full blown shell and you can compile and test your program without ever leaving emacs.
* To change back to just one window, use `C-x o` to get to the window you want, then hit `C-x 1`
* To make the split top and bottom, use `C-x 2`
* To learn what emacs function a command executes, you can run `M-x describe-key`, then hit the key.  For example, `C-x 1` is:
     C-x 1 runs the command delete-other-windows, which is an interactive
     compiled Lisp function in `window.el'.


# Useful links

* http://explainshell.com/ - A site where you can paste in a unix command and see what all the arguments do.
