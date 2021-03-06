/***************************************************************************
 * (c) 2008-2011 Aleksandar Topuzović                                      *
 * <aleksandar.topuzovic@fer.hr>, <aleksandar.topuzovic@gmail.com>         *
 ***************************************************************************/
#ifndef Eq_hpp
#define Eq_hpp

#include "beagle/GP.hpp"
#include <string>

#ifdef BEAGLE_HAVE_RTTI
#include <typeinfo>
#endif // BEAGLE_HAVE_RTTI

class Eq : public Beagle::GP::Primitive {

public:

  //! Eq allocator type.
  typedef Beagle::AllocatorT<Eq,Beagle::GP::Primitive::Alloc> Alloc;
  typedef Beagle::PointerT<Eq,Beagle::GP::Primitive::Handle> Handle;
  typedef Beagle::ContainerT<Eq,Beagle::GP::Primitive::Bag> Bag;

  explicit Eq();
  virtual ~Eq() { }

#ifdef BEAGLE_HAVE_RTTI
  virtual const std::type_info* getArgType(unsigned int inN, Beagle::GP::Context& ioContext) const;
  virtual const std::type_info* getReturnType(Beagle::GP::Context& ioContext) const;
#endif // BEAGLE_HAVE_RTTI

  virtual void                  execute(Beagle::GP::Datum& outDatum, Beagle::GP::Context& ioContext);

};

#endif // Eq_hpp
