
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicTreeUI$PropertyChangeHandler__
#define __javax_swing_plaf_basic_BasicTreeUI$PropertyChangeHandler__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace beans
    {
        class PropertyChangeEvent;
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
            class BasicTreeUI;
            class BasicTreeUI$PropertyChangeHandler;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicTreeUI$PropertyChangeHandler : public ::java::lang::Object
{

public:
  BasicTreeUI$PropertyChangeHandler(::javax::swing::plaf::basic::BasicTreeUI *);
  virtual void propertyChange(::java::beans::PropertyChangeEvent *);
public: // actually package-private
  ::javax::swing::plaf::basic::BasicTreeUI * __attribute__((aligned(__alignof__( ::java::lang::Object)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicTreeUI$PropertyChangeHandler__