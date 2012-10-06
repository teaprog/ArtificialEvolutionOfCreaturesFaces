This is a small program that I made recently to illustrate the concept of artificial evolution. 
I used a genetic algorithm without a fitness function. Every creature gets an offspring so it wasn't needed.

Every individual in the simulation has its own genetic code. The code, i.e. a string, describes its appearance. 
All creatures start with the same genes. The population is divided into four groups. 
Creatures can only interbreed with beings within their own group. For each individual a random partner is selected. 
An arbitrary crossover point in the genetic string is chosen for both parents. 
Both strings are cut in two pieces at the crossover point. The one half is saved and the other is thrown away. 
The two strings, that were saved, are then connected and form together the genetic code of the offspring. 
After that mutation may occur on the genetic string.

Programmed in C++ with SDL and OpenGL.

Link to visualization: http://www.youtube.com/watch?v=x3oyqbNT1oY&feature=plcp