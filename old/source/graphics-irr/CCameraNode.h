/*
   Copyright (C) 2014  absurdworlds

   License LGPLv3-only:
   GNU Lesser GPL version 3 <http://gnu.org/licenses/lgpl-3.0.html>
   This is free software: you are free to change and redistribute it.
   There is NO WARRANTY, to the extent permitted by law.
 */
#ifndef _hrengin_CCameraNode_
#define _hrengin_CCameraNode_

#include <hrengin/graphics/IVideoManager.h>

#include <hrengin/scene/ISceneNode.h>
#include <hrengin/scene/ICameraNode.h>

namespace irr {
class IrrlichtDevice;
namespace scene {
class ICameraSceneNode;
class ISceneManager;

class ISceneNodeAnimator;
}
}
namespace hrengin {
namespace scene {
class CSceneManager;
class CIrrDummyNode;

class CCameraNode : public ICameraNode {
public:
	CCameraNode(CSceneManager* sceneManager,
		irr::scene::ICameraSceneNode* camNode,
		irr::scene::ISceneManager* irrScMgr,
		irr::IrrlichtDevice* device);
	virtual ~CCameraNode();

	virtual Line3d<f32> getRayFromScreen(i32 x, i32 y);

	virtual void SetTargetPosition(Vector3d<f32> pos);
	virtual void SetCameraPosition(Vector3d<f32> pos);

	virtual void BindTargetToCamera(bool bind);

	virtual void SetCameraFOV(f64 fov);
	virtual void SetNearPlane(f64 dist);
	virtual void SetFarPlane(f64 dist);

	virtual void SetDistance(f64 dist);

	virtual void SetBehavior(CAM_Behavior beh);
private:
	irr::IrrlichtDevice* device_;
	irr::scene::ISceneManager* scmgr_;
	
	CIrrDummyNode* dummy_;
	irr::scene::ICameraSceneNode* camera_;

	// TODO: move into separate class
	CAM_Behavior controlBehavior;
	irr::scene::ISceneNodeAnimator* animator;
};

} // namespace scene
} // namespace hrengin

#endif//_hrengin_CCameraNode_
