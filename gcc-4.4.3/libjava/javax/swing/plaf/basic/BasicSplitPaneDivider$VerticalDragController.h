
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicSplitPaneDivider$VerticalDragController__
#define __javax_swing_plaf_basic_BasicSplitPaneDivider$VerticalDragController__

#pragma interface

#include <javax/swing/plaf/basic/BasicSplitPaneDivider$DragController.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class MouseEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
            class BasicSplitPaneDivider;
            class BasicSplitPaneDivider$VerticalDragController;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicSplitPaneDivider$VerticalDragController : public ::javax::swing::plaf::basic::BasicSplitPaneDivider$DragController
{

public: // actually protected
  BasicSplitPaneDivider$VerticalDragController(::javax::swing::plaf::basic::BasicSplitPaneDivider *, ::java::awt::event::MouseEvent *);
  virtual jint getNeededLocation(jint, jint);
  virtual jint positionForMouseEvent(::java::awt::event::MouseEvent *);
public: // actually package-private
  virtual jint adjust(jint, jint);
  ::javax::swing::plaf::basic::BasicSplitPaneDivider * __attribute__((aligned(__alignof__( ::javax::swing::plaf::basic::BasicSplitPaneDivider$DragController)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicSplitPaneDivider$VerticalDragController__
