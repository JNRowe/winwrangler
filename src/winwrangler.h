/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * winwrangler.h
 * Copyright (C) Mikkel Kamstrup Erlandsen 2008 <mikkel.kamstrup@gmail.com>
 * 
 * winwrangler.h is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * winwrangler.h is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with callbacks.h.  If not, write to:
 * 	The Free Software Foundation, Inc.,
 * 	51 Franklin Street, Fifth Floor
 * 	Boston, MA  02110-1301, USA.
 */


#ifndef _WW_H_
#define _WW_H_

#include <config.h>

#define WNCK_I_KNOW_THIS_IS_UNSTABLE
#include <libwnck/window.h>
#include <libwnck/screen.h>


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>

G_BEGIN_DECLS

typedef void (*WwLayoutHandler)	(GList		*windows,
								 WnckWindow	*active,
								 GError		**error);

typedef struct {
	gchar			*name;
	WwLayoutHandler	handler;
} WwLayout;

WwLayout[]		ww_get_layouts		(void);

G_END_DECLS

#endif /* _WW_H_ */