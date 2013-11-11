//
//  MeetupCommunicator.h
//  BrowseMeetup
//
//  Created by Dan Orlando on 11/11/13.
//

#import <CoreLocation/CoreLocation.h>

@protocol MeetupCommunicatorDelegate;

@interface MeetupCommunicator : NSObject
@property (weak, nonatomic) id<MeetupCommunicatorDelegate> delegate;

- (void)searchGroupsAtCoordinate:(CLLocationCoordinate2D)coordinate;
@end
