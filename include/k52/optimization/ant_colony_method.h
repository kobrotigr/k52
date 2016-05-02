#pragma once
#ifndef ANT_COLONY_METHOD_H_
#define ANT_COLONY_METHOD_H_

#include <boost/shared_ptr.hpp>

#include <k52/optimization/continuous_optimizer.h>

namespace k52
{
namespace optimization
{

class AntColonyMethod : public ContinuousOptimizer
{
public:
	AntColonyMethod();

    /// Creates deep clone of an object with resource allocation. See ICloneable
	/// @return deep clone of an object
    virtual AntColonyMethod* Clone() const;

    virtual std::string get_name() const;


protected:
	virtual std::vector<double> FindOptimalParameters(const std::vector<double>& initial_parameters);
};

}
}

#endif

