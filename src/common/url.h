/* HexChat
 * Copyright (C) 1998-2010 Peter Zelezny.
 * Copyright (C) 2009-2013 Berke Viktor.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef HEXCHAT_URL_H
#define HEXCHAT_URL_H

extern void *url_tree;

#define WORD_URL     1
#define WORD_NICK    2
#define WORD_CHANNEL 3
#define WORD_HOST    4
#define WORD_HOST6   5
#define WORD_EMAIL   6
/* anything >0 will be displayed as a link by gtk_xtext_motion_notify() */
#define WORD_DIALOG  -1
#define WORD_PATH    -2

void url_clear (void);
void url_save_tree (const char *fname, const char *mode, gboolean fullpath);
int url_last (int *, int *);
int url_check_word (const char *word);
void url_check_line (char *buf, int len);

#endif
