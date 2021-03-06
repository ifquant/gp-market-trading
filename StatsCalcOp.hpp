/***************************************************************************
 * (c) 2008-2011 Aleksandar Topuzović                                      *
 * <aleksandar.topuzovic@fer.hr>, <aleksandar.topuzovic@gmail.com>         *
 ***************************************************************************/
#ifndef stats_hpp
#define stats_hpp

namespace trading {

class StatsCalcOp : public Beagle::GP::StatsCalcFitnessSimpleOp {

public:

	//! StatsCalcComplex allocator type
	typedef Beagle::AllocatorT<trading::StatsCalcOp, Beagle::GP::StatsCalcFitnessSimpleOp::Alloc>
		Alloc;
	//! StatsCalcComplex handle type.
	typedef Beagle::PointerT<trading::StatsCalcOp, Beagle::GP::StatsCalcFitnessSimpleOp::Handle>
		Handle;
	//! StatsCalcComplex bag type.
	typedef Beagle::ContainerT<trading::StatsCalcOp, Beagle::GP::StatsCalcFitnessSimpleOp::Bag>
		Bag;

	explicit StatsCalcOp(Beagle::string inName="GP-StatsCalcTrading");
	virtual ~StatsCalcOp() { }

	virtual void calculateStatsDeme(Beagle::Stats& outStats,
									Beagle::Deme& ioDeme,
									Beagle::Context& ioContext) const;
};

}

#endif // stats_hpp
