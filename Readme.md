Each cpp file is compiled to a separate object (.o) file. Then the two object files are "linked" together to create the executable. With the below command the object files are deleted after they are linked into the executable, so you won't see them.

`g++ program implementation`

`program` is the name of the driver program, like "main.cpp", <br>

`implementation` is the name of the class implementation file, like "student.cpp"
