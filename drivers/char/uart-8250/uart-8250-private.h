/*
    This file is part of MutekH.

    MutekH is free software; you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    MutekH is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with MutekH; if not, write to the Free Software Foundation,
    Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

    Copyright Alexandre Becoulet <alexandre.becoulet@lip6.fr> (c) 2006

*/

#ifndef UART_8250_PRIVATE_H_
#define UART_8250_PRIVATE_H_

#include <hexo/types.h>
#include <hexo/lock.h>

struct uart_8250_context_s
{
  uint8_t				line_mode;
  uint16_t				line_speed;

  dev_char_queue_root_t	read_q;
  dev_char_queue_root_t	write_q;
};

#endif
