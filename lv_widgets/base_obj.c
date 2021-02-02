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
	lv_obj_set_drag(base_obj, true);
	lv_obj_set_size(base_obj, 200, 200);
	lv_obj_set_pos(base_obj,200,200);

	lv_obj_t * btn = lv_btn_create(lv_scr_act(),NULL);
	lv_obj_set_drag(btn, true);
	lv_obj_set_size(btn, 100, 100);
	lv_obj_set_pos(btn,100,100);


	fflush(NULL);
}
