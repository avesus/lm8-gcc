
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_rmi_CORBA_TieTargetRecord__
#define __gnu_javax_rmi_CORBA_TieTargetRecord__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace rmi
      {
        namespace CORBA
        {
            class TieTargetRecord;
        }
      }
    }
  }
  namespace javax
  {
    namespace rmi
    {
      namespace CORBA
      {
          class Tie;
      }
    }
  }
}

class gnu::javax::rmi::CORBA::TieTargetRecord : public ::java::lang::Object
{

public:
  TieTargetRecord(::javax::rmi::CORBA::Tie *);
  virtual void add(::java::lang::Object *);
  virtual void remove(::java::lang::Object *);
  virtual jboolean unused();
  ::javax::rmi::CORBA::Tie * __attribute__((aligned(__alignof__( ::java::lang::Object)))) tie;
  ::java::util::HashSet * targets;
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_rmi_CORBA_TieTargetRecord__
