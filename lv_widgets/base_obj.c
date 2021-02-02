/*
 * base_obj.c
 *
 *  Created on: 2 feb. 2021
 *      Author: erikschott
 */
 #include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "base_obj.h"
#include "../lvgl/lvgl.h"

void base_obj(void)
{
	printf("base_obj\n");

	lv_obj_t * base_obj = lv_obj_create(lv_scr_act(),NULL);
	fflush(NULL);
}
