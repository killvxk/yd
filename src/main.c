/* -*- Mode: C; indent-tabs-mode: nil; c-basic-offset: 4; tab-width: 4 -*- */
/*
* main.c
* Copyright (C) 2014 Wiky L <wiiiky@yeah.net>
*
* yuan is free software: you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* yuan is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along
* with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include "yd.h"

int main(int argc, char *argv[])
{
    yd_init(argc, argv);

    YdMainWindow *window = yd_main_window_new();
    yd_main_window_show(window);

    gtk_main();
    return (0);
}
