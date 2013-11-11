//
//  MeetupCommunicatorDelegate.h
//  BrowseMeetup
//
//  Created by Dan Orlando on 11/11/13.
//

#import <Foundation/Foundation.h>

@protocol MeetupCommunicatorDelegate

- (void)receivedGroupsJSON:(NSData *)groups;

- (void)fetchingGroupsFailedWithError:(NSError *)error;


@end
