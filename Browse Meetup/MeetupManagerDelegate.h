//
//  MeetupManagerDelegate.h
//  BrowseMeetup
//
//  Created by Dan Orlando on 11/11/13.
//

#import <Foundation/Foundation.h>

@protocol MeetupManagerDelegate

- (void)didReceiveGroups:(NSArray *)groups;

- (void)fetchingGroupsFailedWithError:(NSError *)error;

@end
