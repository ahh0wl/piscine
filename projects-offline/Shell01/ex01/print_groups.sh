#!/bin/bash
FT_USER=$(id -un)
id -Gn $FT_USER | tr ' ' ',' | tr -d "\n"

 

