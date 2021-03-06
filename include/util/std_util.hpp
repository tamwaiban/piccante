/*

PICCANTE
The hottest HDR imaging library!
http://vcg.isti.cnr.it/piccante

Copyright (C) 2014
Visual Computing Laboratory - ISTI CNR
http://vcg.isti.cnr.it
First author: Francesco Banterle

This Source Code Form is subject to the terms of the Mozilla Public
License, v. 2.0. If a copy of the MPL was not distributed with this
file, You can obtain one at http://mozilla.org/MPL/2.0/.

*/

#ifndef PIC_UTIL_STD_UTIL_HPP
#define PIC_UTIL_STD_UTIL_HPP

#include <vector>

namespace pic {

/**
 * @brief filterInliers
 * @param vec
 * @param inliers
 * @param vecOut
 */
template<class T>
inline void filterInliers(std::vector< T > &vec, std::vector< unsigned int > &inliers, std::vector< T > &vecOut)
{
    vecOut.clear();

    if(!inliers.empty()) {
        for(unsigned int i = 0; i < inliers.size(); i++) {
            vecOut.push_back(vec[inliers[i]]);
        }
    } else {
        vecOut.assign(vec.begin(), vec.end());
    }
}

} // end namespace pic

#endif // PIC_UTIL_STD_UTIL_HPP
