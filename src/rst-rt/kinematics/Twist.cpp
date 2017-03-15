/* ============================================================
 *
 * This file is a part of RST-RT (CogIMon) project
 *
 * Copyright (C) 2017 by Dennis Leroy Wigand <dwigand@techfak.uni-bielefeld.de>
 *
 * This file may be licensed under the terms of the
 * GNU Lesser General Public License Version 3 (the ``LGPL''),
 * or (at your option) any later version.
 *
 * Software distributed under the License is distributed
 * on an ``AS IS'' basis, WITHOUT WARRANTY OF ANY KIND, either
 * express or implied. See the LGPL for the specific language
 * governing rights and limitations.
 *
 * You should have received a copy of the LGPL along with this
 * program. If not, go to http://www.gnu.org/licenses/lgpl.html
 * or write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The development of this software was supported by:
 *   CoR-Lab, Research Institute for Cognition and Robotics
 *     Bielefeld University
 *
 * ============================================================ */

#include "Twist.hpp"

namespace rstrt {
namespace kinematics {

Twist::Twist() {
}

Twist::Twist(rstrt::kinematics::LinearVelocities l,
		rstrt::geometry::AngularVelocity a) :
		linear(l), angular(a) {

}

Twist::Twist(float x, float y, float z, float a, float b, float c) :
		linear(x, y, z), angular(a, b, c) {

}

std::ostream& operator<<(std::ostream& os, const Twist& cd) {
	os << cd.linear << std::endl << cd.angular;
	return os;
}

std::istream& operator>>(std::istream& is, Twist& cd) {
	return is;
}

}
}