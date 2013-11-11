//
//  MeetupManager.h
//  BrowseMeetup
//
//  Created by Dan Orlando on 11/11/13.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#import "MeetupManagerDelegate.h"
#import "MeetupCommunicatorDelegate.h"

@class MeetupCommunicator;

@interface MeetupManager : NSObject<MeetupCommunicatorDelegate>

@property (strong, nonatomic) MeetupCommunicator *communicator;
@property (weak, nonatomic) id<MeetupManagerDelegate> delegate;

- (void)fetchGroupsAtCoordinate:(CLLocationCoordinate2D)coordinate;

@end
