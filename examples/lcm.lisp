; edgar - a small LISP Interpreter written in C
; Copyright (c) 2013 Thomas Cort <linuxgeek@gmail.com>
;
; This program is free software: you can redistribute it and/or modify
; it under the terms of the GNU General Public License as published by
; the Free Software Foundation, either version 3 of the License, or
; (at your option) any later version.
;
; This program is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU General Public License for more details.
;
; You should have received a copy of the GNU General Public License
; along with this program.  If not, see <http://www.gnu.org/licenses/>.


; ABS - Absolute Value Function
(DEFUN ABS (X)
       (COND
	 	((LESS X 0) (MINUS 0 X))
		(T X)))


; GCD - Find the Greatest Common Divisor of 2 numbers
(DEFUN GCD (X Y)
       (COND
	 	((EQUAL Y 0) X)
		(T (GCD Y (REMAINDER X Y)))))


; LCM - Find the Least Common Multiple of 2 numbers
(DEFUN LCM (X Y)
       (QUOTIENT (ABS (TIMES X Y)) (GCD X Y)))
