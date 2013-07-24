/*
 * edgar - a small LISP Interpreter written in C
 * Copyright (c) 2013 Thomas Cort <linuxgeek@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <assert.h>
#include <stdio.h>

#include "func_equal.h"
#include "obj.h"

obj_t * func_equal(obj_t *args, obj_t *env) {

	obj_t * result;

	if (!IS_LIST(args)) {
		fprintf(stdout, "EQUAL: expected argument list\n");
		return alloc_fail();
	} else if (!IS_LIST(CDR(args)) || !IS_NIL(CDR(CDR(args)))) {
		fprintf(stdout, "EQUAL: expected 2 arguments\n");
		return alloc_fail();
	}

	result = compare_obj(CAR(args), CADR(args));

	return result;
}
