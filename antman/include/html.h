/*
** EPITECH PROJECT, 2023
** lyrics.h
** File description:
** header for the lyrics
*/

#pragma once

#include "../../include/my.h"

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include <sys/stat.h>

int antman_html(char *path);

char *recup_file(char *path);
int get_size_file(char *path);
