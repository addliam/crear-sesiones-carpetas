# SIMPLE CLI PROGRAM

### FOUND INTERESTING INFO
Which compiler do you use? If you're codeblocks on Windows, I'm guessing it's MinGW.

Check this out:
http://stackoverflow.com/questions/708238/how-do-i-add-an-icon-to-a-mingw-gcc-compiled-executable

Summary:
1. First make a resource (.rc) file which refers to the icon like so:
id ICON "path/to/my.ico"
2. Compile it into an object:
windres my.rc -O coff -o my.res
3. Link it into your exe with the rest of your project:
g++ -o my_app obj1.o obj2.o my.res

Since this uses command-line build-commands instead of using the codeblocks interface, try this:
1. Add your .rc file to your project, then right-click on the file and select "Properties".
2. Go to "advanced"
3. Select "use customer command to build this file"
4. Add windres my.rc -O coff -o $object