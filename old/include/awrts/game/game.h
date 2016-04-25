/*
 * aw game engine library
 * Copyright (C) 2013-2015  absurdworlds
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License, version 3
 * as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program.  If not, see
 * <http://www.gnu.org/licenses/>. 
 */
#ifndef _aw_game_h_
#define _aw_game_h_

#include <aw/config/visibility.h>

#ifdef AW_MODULE_GAME
	#define AW_GAME_EXP HR_EXPORT
#else
	#define AW_GAME_EXP HR_IMPORT
#endif

// Namespace descriptions for Doxygen
namespace aw {
//! Everything related to game logic, except AI
namespace game {}
}
#endif//_aw_game_h_
