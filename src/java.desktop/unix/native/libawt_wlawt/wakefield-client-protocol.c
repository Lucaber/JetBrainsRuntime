/* Generated by wayland-scanner 1.19.0 */

/*
 * Copyright (c) 2022, Oracle and/or its affiliates. All rights reserved.
 * Copyright (c) 2022, JetBrains s.r.o.. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 */

#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

#ifndef __has_attribute
# define __has_attribute(x) 0  /* Compatibility with non-clang compilers. */
#endif

#if (__has_attribute(visibility) || defined(__GNUC__) && __GNUC__ >= 4)
#define WL_PRIVATE __attribute__ ((visibility("hidden")))
#else
#define WL_PRIVATE
#endif

extern const struct wl_interface wl_buffer_interface;
extern const struct wl_interface wl_surface_interface;

static const struct wl_interface *wakefield_types[] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	&wl_surface_interface,
	NULL,
	NULL,
	&wl_surface_interface,
	&wl_buffer_interface,
	NULL,
	NULL,
	&wl_surface_interface,
	NULL,
	NULL,
	NULL,
	&wl_buffer_interface,
	NULL,
};

static const struct wl_message wakefield_requests[] = {
	{ "destroy", "", wakefield_types + 0 },
	{ "move_surface", "oii", wakefield_types + 5 },
	{ "get_surface_location", "o", wakefield_types + 8 },
	{ "get_pixel_color", "ii", wakefield_types + 0 },
	{ "send_key", "uu", wakefield_types + 0 },
	{ "send_cursor", "ii", wakefield_types + 0 },
	{ "send_button", "uu", wakefield_types + 0 },
	{ "send_wheel", "i", wakefield_types + 0 },
	{ "set_xkb_rule_names", "sssss", wakefield_types + 0 },
	{ "capture_create", "oii", wakefield_types + 9 },
};

static const struct wl_message wakefield_events[] = {
	{ "surface_location", "oiiu", wakefield_types + 12 },
	{ "pixel_color", "iiuu", wakefield_types + 0 },
	{ "capture_ready", "ou", wakefield_types + 16 },
};

WL_PRIVATE const struct wl_interface wakefield_interface = {
	"wakefield", 1,
	10, wakefield_requests,
	3, wakefield_events,
};

