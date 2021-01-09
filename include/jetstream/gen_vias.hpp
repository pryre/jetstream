/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/. */

#ifndef JETSTREAM__GEN_VIAS_HPP_
#define JETSTREAM__GEN_VIAS_HPP_

#include <stdint.h>

#include <algorithm>
#include <cmath>
#include <limits>
#include <vector>

namespace jetstream {

namespace gen_vias {

enum Conditioning {
	None,
	Holding,
	BoundedHolding,
	Stopping
};

// Eigen::Matrix2d generate_vias(const Eigen::VectorXd& positions);

// Eigen::VectorXd estimate_dvias_fdcc(const Eigen::VectorXd& vias, const double dt, const Conditioning conditioning);

// Eigen::VectorXd generate_vias(const Eigen::VectorXd& kernel, const int order);

}	// namespace gen_vias

}	// namespace jetstream

#endif	// JETSTREAM__GEN_VIAS_HPP_
