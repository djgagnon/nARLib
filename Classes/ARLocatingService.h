//
//  ARLocatingService.h
//  nARLib
//
//  Created by Naja von Schmude on 13.07.10.
//  Copyright 2010 Naja's Corner. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>


@interface ARLocatingService : NSObject <CLLocationManagerDelegate> {
	/// location manager
	CLLocationManager	*locationManager;
	/// current location of device
	CLLocation			*currentLocation;
	/// current heading of device
	CLHeading			*currentHeading;
	
	/// you can simulate this service by setting heading and location by yourself
	BOOL				isSimulatingHeading;
	BOOL				isSimulatingLocation;

}

@property (readonly)	CLLocation		*currentLocation;
@property (readonly)	CLHeading		*currentHeading;
@property (assign)		BOOL			isSimulatingHeading;
@property (assign)		BOOL			isSimulatingLocation;

/**
 * Starts the locating services
 */
- (void) startLocating;

/**
 * Stops the locating services
 */
- (void) stopLocating;

/**
 * Changes the device orientation (used for calculating the proper heading) to the new orientation
 * @param orientation new device orientation to use for heading events
 */
- (void) changeToDeviceOrientation:(CLDeviceOrientation) orientation;

- (void) simulateLocation:(CLLocation*) loc;

- (void) simulateHeading:(CLHeading*) heading;
@end
