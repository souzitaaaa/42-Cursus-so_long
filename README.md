<p align="center">
  <img src="https://github.com/jotavare/jotavare/blob/main/42/banner/42_banner_so_long.png">
</p>

<p align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%2312bab9&style=flat-square" />
	<img src="https://img.shields.io/badge/evaluated-24%20%2F%2011%20%2F%202022-success?color=%2312bab9&style=flat-square" />
	<img src="https://img.shields.io/badge/score-125%20%2F%20100-success?color=%2312bab9&style=flat-square" />
	<img src="https://img.shields.io/github/languages/top/jotavare/libft?color=%2312bab9&style=flat-square" />
	<img src="https://img.shields.io/github/last-commit/jotavare/libft?color=%2312bab9&style=flat-square" />
</p>

<p align="center">
	<a href="#about">About</a> •
	<a href="#how-to-use">How to use</a> •
	<a href="#mandatory">Mandatory</a> •
	<a href="#bonus">Bonus</a> •
	<a href="#disclaimer">Disclaimer</a> •
	<a href="#testers">Testers</a> •
	<a href="#license">License</a>
</p>

## ABOUT
This project is for 42 School and involves creating a simple 2D game using the MiniLibx library.</br>
The mandatory requirements for the game include a player, an exit, collectibles, and a movement counter displayed in the terminal.</br>
The bonus requirements for the game include adding animation sprites, displaying movement directly on the screen, and including enemy characters.</br>

For my game project, I had the freedom to choose the game sprites, so I decided to create a game featuring Hatsune Miku. In the game, the player must collect all the microphones and exit through the television. As a bonus, I added Rin and Teto as enemies for the player.</br>
Since this was my first game project and I was really excited about it, I wanted to make it about something I enjoy.</br>

## GAME RULES
#### For the game begin, the map must follow a set of rules:

* The executable ``so_long`` will only receive a map as a argument, and the map must be a ``.ber`` filetype
  >A .ber file is a binary encoding rules file, which is a type of file used to encode data in a binary format for transmission or storage. The term "BER" stands for Basic Encoding Rules, which is a set of rules for encoding abstract data types in a way that is machine-readable and platform-independent.

* The map on the mandatory part can only contain with characters: ``P`` *(player)*, ``E`` *(exit)*, ``C`` *(collectable)*, ``0`` *(floor)* and ``1`` *(wall)*, but on the bonus part I add a ``R`` and a ``T``, to symbolize the enemies
Example of a valid map:

<div align="center">

![image](https://user-images.githubusercontent.com/117469751/222915238-20985d05-9ce0-46d4-b7bf-99c48b1187f1.png)

</div>

* There must be at least one exit, one player and one collectable on the map

* The map you provide needs to be rectangular, all rows must have the same lenght

* The map must be closed by walls

* And have a valid path to the exit in a way you can pick up all the collectables before exiting

## CODE SYNOPSIS
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

## Gameplay

Looking for a way to make the screenrecorder into gif without losing the quality

## DISCLAIMER
At 42 School, it is expected that almost every project is written in accordance with the Norm, which is the coding standard of the school.

```bash
- No for, do while, switch, case or goto are allowed
- No more than 25 lines per function and 5 functions per file
- No assigns and declarations in the same line (unless static)
- No more than 5 variables in 1 function
- ...
```

<a href="https://github.com/jotavare/jotavare/blob/main/42/pdf/en_norm.pdf">Click here</a> for more information on 42 norms.

## TESTERS
* [so_long map validator](https://github.com/Nuno-Jesus/so_long_map_validator)

## LICENSE
<p>
This work is published under the terms of <a href="https://github.com/jotavare/jotavare/blob/main/LICENSE">42 Unlicense</a>.
</p>
