#
#  File i/o with Python
#
#  Al Curry   March 2016
#
#  ac.txt assumed to be in the same directory as this file RWfile.py
#
#

# open file to read in read mode, "r"
read_file = open("ac.txt","r")

# open file to be written to in write mode, "w"
write_file = open("Curry.txt","w")

for line in read_file:

    # strip function removes the line feed when reading in, otherwise
    # "print" would create double-spaced output, since it adds a line feed
    # write the line out with the line feed added back
    line = line.strip()
    print(line)
    write_file.write(line + "\n")

# close the files upon completion
read_file.close()
write_file.close()
