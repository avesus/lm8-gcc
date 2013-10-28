
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_MultiAttributeSet__
#define __javax_swing_text_html_MultiAttributeSet__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
          class AttributeSet;
        namespace html
        {
            class MultiAttributeSet;
        }
      }
    }
  }
}

class javax::swing::text::html::MultiAttributeSet : public ::java::lang::Object
{

public: // actually package-private
  MultiAttributeSet();
  MultiAttributeSet(JArray< ::javax::swing::text::AttributeSet * > *);
  virtual void init(JArray< ::javax::swing::text::AttributeSet * > *);
public:
  virtual jboolean containsAttribute(::java::lang::Object *, ::java::lang::Object *);
  virtual jboolean containsAttributes(::javax::swing::text::AttributeSet *);
  virtual ::javax::swing::text::AttributeSet * copyAttributes();
  virtual ::java::lang::Object * getAttribute(::java::lang::Object *);
  virtual jint getAttributeCount();
  virtual ::java::util::Enumeration * getAttributeNames();
  virtual ::javax::swing::text::AttributeSet * getResolveParent();
  virtual jboolean isDefined(::java::lang::Object *);
  virtual jboolean isEqual(::javax::swing::text::AttributeSet *);
public: // actually package-private
  JArray< ::javax::swing::text::AttributeSet * > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) multi;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_html_MultiAttributeSet__