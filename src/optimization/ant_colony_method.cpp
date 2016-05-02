#include "ant_colony_method.h"

#include <k52/optimization/params/i_continuous_parameters.h>

using ::std::vector;

namespace k52
{
namespace optimization
{

AntColonyMethod::AntColonyMethod()
{
}

AntColonyMethod* AntColonyMethod::Clone() const
{
    return new AntColonyMethod();
}

std::string AntColonyMethod::get_name() const
{
	return "Ant Colony Method";
}

vector<double> AntColonyMethod::FindOptimalParameters(const vector<double>& initial_parameters)
{
	return initial_parameters;
}

}
}