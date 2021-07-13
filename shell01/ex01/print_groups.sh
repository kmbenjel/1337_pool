#!/bin/sh
id -G -n $FT_USER | sed 's/\ /,/g'
