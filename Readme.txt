1)..BaseConverter file contains a function named convert

2)..It converts from base 2 upto 36 (integer value only such as : -85, 100f, 65, A5, etc).

3)..This function returning a string value is all arguments are correct else you will get error printed and null will be returning.

3)..Convert function taking 3 arguments (convert_from, "number", convert_to).
    (a) Why are they used, is defined by their names.
    (b) Number is in double qoutes because the number is going to be converted should have string format.
    (c) Convert_from and Convert_to are in integer format 
    (d) (For example convert(10, "100", 8) 144 will be returning in string format).

4)..Working :-
    (a) It works as the string got converted into decimal and
	that decimal then converted into required base.

    (b) It is the approach that can be understood quickly.