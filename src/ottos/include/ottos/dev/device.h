/* device.h
 * 
 * Copyright (c) 2011 The ottos project.
 *
 * This work is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 * 
 * This work is distributed in the hope that it will be useful, but without
 * any warranty; without even the implied warranty of merchantability or
 * fitness for a particular purpose. See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
 *
 *  Created on: Nov 10, 2011
 *      Author: Matthias Schmid <ramsondon@gmail.com>
 */

#ifndef DEVICE_H_
#define DEVICE_H_

/*
 * Device identifiers
 *
 * WARNING: always check the <ottos/limits.h> for DEVICE_MAX_COUNT
 */
#define DEVICE_INVALID  -1

#define LED_0           11
#define LED_1           12


/*
 * device_t
 *
 * Represents a device for ottOS
 */
typedef struct device_t {
    int dev;
} device_t;



#endif /* DEVICE_H_ */
