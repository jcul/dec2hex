Simple scipt to convert decimal numbers in a text to hexadecimal.

e.g.

    $ echo "1. here 255 is 65535 some 3735928559 text with numbers" | ./dec2hex 
    0x01. here 0xff is 0xffff some 0xdeadbeef text with numbers

    $ ./dec2hex <file.txt >file_hex.txt
