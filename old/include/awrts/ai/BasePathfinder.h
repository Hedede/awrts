/*
 * Copyright (C) 2014  absurdworlds
 *
 * License LGPLv3-only:
 * GNU Lesser GPL version 3 <http://gnu.org/licenses/lgpl-3.0.html>
 * This is free software: you are free to change and redistribute it.
 * There is NO WARRANTY, to the extent permitted by law.
 */
#ifndef _aw_BasePathfinder_
#define _aw_BasePathfinder_

#include <aw/math/Vector3d.h>

#include <aw/ai/ai.h>

namespace aw {
namespace ai {
class Path;

class BasePathfinder {
public:
	virtual Path findPath(Vector3d<f32> start, Vector3d<f32> end) = 0;
};

HR_AI_EXP BasePathfinder* createSimplePathfinder();

} // namespace ai
} // namespace aw
#endif //_aw_BasePathfinder_
