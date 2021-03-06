/**
   Copyright (C) 2014  absurdworlds

   License LGPLv3-only:
   GNU Lesser GPL version 3 <http://gnu.org/licenses/lgpl-3.0.html>
   This is free software: you are free to change and redistribute it.
   There is NO WARRANTY, to the extent permitted by law.
 */
#ifndef _hrengin_CGUIWindow_
#define _hrengin_CGUIWindow_

#include <hrengin/gui/IGUIWindow.h>

namespace irr {
namespace gui {
class IGUIElement;
}
}

namespace hrengin {
namespace gui {

class CGUIWindow : public IGUIWindow {
public:
	CGUIWindow(irr::gui::IGUIElement* elem);
	virtual ~CGUIWindow();

	virtual u32 getId() const;
	virtual u32 getParentId() const;
	
	virtual std::string getText() const;
	virtual void setText(std::string text);

	virtual void* getUnderlyingElement() const
	{
		return (void*) irrElement_;
	}

private:
	irr::gui::IGUIElement* irrElement_;
};

} // namespace gui
} // namespace hrengin

#endif //_hrengin_CGUIWindow_
