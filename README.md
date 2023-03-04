<h1 align="center">
42-Cursus-so_long
</h1>
<p align="center">
This is a 42 School project that consists in making a simple 2D game, using the MiniLibx library
</p>
<p align="center">
The mandatory part simply asked us a game that has a player, a exit, some collectables and a movement counter in the terminal
</p>
<p align="center">
The bonus part asked us some animation sprites, a movement display directly on the screen and some enemies
</p>

<h2 align="center">
Info
</h2>
<p align="center">
Since we had the freedom to choose the game sprites I decided to made game where a Hatsune Miku, needs to collect all the microphones before exiting throught the television, for the bonus I added Rin and Teto as enemies for our player
Being this the first game I had ever made it and due to the hype I was during the process it seemed natural to me to make it about something I like
</p>
<h2 align="center">
Game Rules
</h2>
<p align="center">
For the game begin, the map must follow a set of rules:
</p>

* The executable ``so_long`` will only receive a map as a argument, and the map must be a ``.ber`` filetype
  >A .ber file is a binary encoding rules file, which is a type of file used to encode data in a binary format for transmission or storage. The term "BER" stands for Basic Encoding Rules, which is a set of rules for encoding abstract data types in a way that is machine-readable and platform-independent.

* The map on the mandatory part can only contain with characters: ``P`` *(player)*, ``E`` *(exit)*, ``C`` *(collectable)*, ``0`` *(floor)* and ``1`` *(wall)*, but on the bonus part I add a ``R`` and a ``T``, to symbolize the enemies
<p align="center">
Example of a valid map:
</p>

<div align="center">

![image](https://user-images.githubusercontent.com/117469751/222915238-20985d05-9ce0-46d4-b7bf-99c48b1187f1.png)

</div>

* There must be at least one exit, one player and one collectable on the map

* The map you provide needs to be rectangular, all rows must have the same lenght

* The map must be closed by walls

* And have a valid path to the exit in a way you can pick up all the collectables before exiting

<h2 align="center">
Code synopsis
</h2>

* ***Reading and checking the map***

In this part is where I made all the verifications on the map to see if passes all of the rules listed above, storing
usefull information like the number of collectables, the postiion of the player to my main struct ``t_game``, 
to be able to do that I used the ``get_next_line`` *(previous project)* to pass all of the map to a array of strings
where each string correspond to a line on the map, that way I can manipulate the map as I want

* ***Starting the game***

This part is where we start to use the MiniLibx, initializating a window making the size of the width and height
the number of collumns and rows multiplying by the standard pixel size of my images, rendering the map with each image
corresponding to his character. After that we use the mlx_hook, *(a function that it's called on events)*, to take care of
the movement

* ***Game mechanics***

If we press the ``ESC`` key the game will close, and the movement is triggered by the keys ``W A S D``, to make it move
we are able to make or by changing the the ``P``, in the array then we had to render the map again or simply by overlaping
textures and just changing the texture on the behind and put the new texture on the new position

* ***Animation***

Not sure if it's done correctly

<h2 align="center">
Gameplay
</h2>

Looking for a way to make the screenrecorder into gif without losing the quality

